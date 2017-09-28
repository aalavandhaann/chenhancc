#include <map>
#include <memory>
#include <stdexcept>
#include <functional>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;



PYBIND11_PLUGIN() {
	std::map <std::string, std::shared_ptr<pybind11::module> > modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return * it->second;
	};

	modules[""] = std::make_shared<pybind11::module>("", " module");

	std::vector< std::pair<std::string, std::string> > sub_modules {
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = std::make_shared<pybind11::module>( modules[p.first]->def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() ) );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");


	return modules[""]->ptr();
}

// Source list file: /home/ashok/eclipse-workspace/chenhancc/autobinding_build/.sources
// .cpp

// Modules list file: /home/ashok/eclipse-workspace/chenhancc/autobinding_build/.modules
// 
