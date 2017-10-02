from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext
import sys

__version__ = '0.0.1'


class get_pybind_include(object):
    """Helper class to determine the pybind11 include path

    The purpose of this class is to postpone importing pybind11
    until it is actually installed, so that the ``get_include()``
    method can be invoked. """

    def __init__(self, user=False):
        self.user = user

    def __str__(self):
        return "./includes/pybind11/include/";

ext_modules = [
    Extension(
        'chenhancc',
        ['chenhancc/chenhancc.cpp'],
        include_dirs=[
            # Path to pybind11 headers
            "./chenhancc/includes/pybind11/include/",
            "./chenhancc/includes/pybinder/",
            "./chenhancc/"
        ],
        language='c++'
    ),
]


# As of Python 3.6, CCompiler has a `has_flag` method.
# cf http://bugs.python.org/issue26689
def has_flag(compiler, flagname):
    """Return a boolean indicating whether a flag name is supported on
    the specified compiler.
    """
    import tempfile
    with tempfile.NamedTemporaryFile('w', suffix='.cpp') as f:
        f.write('int main (int argc, char **argv) { return 0; }')
        try:
            compiler.compile([f.name], extra_postargs=[flagname])
        except setup2.distutils.errors.CompileError:
            return False
    return True


def cpp_flag(compiler):
    """Return the -std=c++[11/14] compiler flag.

    The c++14 is prefered over c++11 (when it is available).
    """
    if has_flag(compiler, '-std=c++14'):
        return '-std=c++14'
    elif has_flag(compiler, '-std=c++11'):
        return '-std=c++11'
    else:
        raise RuntimeError('Unsupported compiler -- at least C++11 support '
                           'is needed!')


class BuildExt(build_ext):
    """A custom build extension for adding compiler-specific options."""
    c_opts = {
        'msvc': ['/EHsc'],
        'unix': [],
    }

    if sys.platform == 'darwin':
        c_opts['unix'] += ['-stdlib=libc++', '-mmacosx-version-min=10.7']

    def build_extensions(self):
        ct = self.compiler.compiler_type
        opts = self.c_opts.get(ct, [])
        if ct == 'unix':
            opts.append('-DVERSION_INFO="%s"' % self.distribution.get_version())
            opts.append(cpp_flag(self.compiler))
            if has_flag(self.compiler, '-fvisibility=hidden'):
                opts.append('-fvisibility=hidden')
        elif ct == 'msvc':
            opts.append('/DVERSION_INFO=\\"%s\\"' % self.distribution.get_version())
        for ext in self.extensions:
            ext.extra_compile_args = opts
        build_ext.build_extensions(self)

setup(
    name='chenhancc',
    version=__version__,
    author='#0K Srinivasan Ramachandran',
    author_email='ashok.srinivasan2002@gmail.com',
    url='https://github.com/aalavandhaann/chenhancc',
    description='A geodesic path solution using chenhan',
    long_description=open('README.txt').read(),
    license='LICENSE.txt',
    keywords='geodesic mesh mesh3d opengl pygl triangle triangular meshes blender',
    python_requires='>=3',
    ext_modules=ext_modules,
    install_requires=['pybind11>=1.8'],
    cmdclass={'build_ext': BuildExt},
    zip_safe=False,
)
