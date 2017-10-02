// File: std/stl_vector.cpp
#include <BaseModel.hpp> // CFace
#include <BaseModel.hpp> // CFace::CFace
#include <BaseModel.hpp> // CFace::operator=
#include <BaseModel.hpp> // CFace::operator[]
#include <BaseModel.hpp> // CFace::setIndices
#include <ExactMethodForDGP.hpp> // InfoAtVertex
#include <ExactMethodForDGP.hpp> // InfoAtVertex::InfoAtVertex
#include <ExactMethodForDGP.hpp> // InfoAtVertex::operator=
#include <ExactMethodForDGP.hpp> // QuoteInfoAtVertex
#include <ExactMethodForDGP.hpp> // QuoteInfoAtVertex::QuoteInfoAtVertex
#include <ExactMethodForDGP.hpp> // QuoteInfoAtVertex::operator=
#include <Point3D.hpp> // CPoint3D
#include <Point3D.hpp> // CPoint3D::CPoint3D
#include <Point3D.hpp> // CPoint3D::Len
#include <Point3D.hpp> // CPoint3D::Normalize
#include <Point3D.hpp> // CPoint3D::operator*=
#include <Point3D.hpp> // CPoint3D::operator+=
#include <Point3D.hpp> // CPoint3D::operator-=
#include <Point3D.hpp> // CPoint3D::operator/
#include <Point3D.hpp> // CPoint3D::operator/=
#include <Point3D.hpp> // CPoint3D::operator=
#include <Point3D.hpp> // CPoint3D::operator==
#include <PreviousCH.hpp> // InfoAtAngle
#include <PreviousCH.hpp> // InfoAtAngle::InfoAtAngle
#include <PreviousCH.hpp> // InfoAtAngle::operator=
#include <PreviousCH.hpp> // QuoteWindow
#include <PreviousCH.hpp> // QuoteWindow::QuoteWindow
#include <PreviousCH.hpp> // QuoteWindow::operator=
#include <RichModel.hpp> // CEdge
#include <RichModel.hpp> // CEdge::CEdge
#include <RichModel.hpp> // CEdge::operator=
#include <RichModel.hpp> // CRichModel
#include <RichModel.hpp> // EdgePoint
#include <RichModel.hpp> // EdgePoint::EdgePoint
#include <RichModel.hpp> // EdgePoint::Get3DPoint
#include <RichModel.hpp> // EdgePoint::operator=
#include <initializer_list> // std::initializer_list
#include <initializer_list> // std::initializer_list<CEdge>::begin
#include <initializer_list> // std::initializer_list<CEdge>::end
#include <initializer_list> // std::initializer_list<CEdge>::initializer_list
#include <initializer_list> // std::initializer_list<CEdge>::size
#include <initializer_list> // std::initializer_list<CPoint3D>::begin
#include <initializer_list> // std::initializer_list<CPoint3D>::end
#include <initializer_list> // std::initializer_list<CPoint3D>::initializer_list
#include <initializer_list> // std::initializer_list<CPoint3D>::size
#include <initializer_list> // std::initializer_list<QuoteInfoAtVertex>::begin
#include <initializer_list> // std::initializer_list<QuoteInfoAtVertex>::end
#include <initializer_list> // std::initializer_list<QuoteInfoAtVertex>::initializer_list
#include <initializer_list> // std::initializer_list<QuoteInfoAtVertex>::size
#include <initializer_list> // std::initializer_list<QuoteWindow>::begin
#include <initializer_list> // std::initializer_list<QuoteWindow>::end
#include <initializer_list> // std::initializer_list<QuoteWindow>::initializer_list
#include <initializer_list> // std::initializer_list<QuoteWindow>::size
#include <initializer_list> // std::initializer_list<bool>::begin
#include <initializer_list> // std::initializer_list<bool>::end
#include <initializer_list> // std::initializer_list<bool>::initializer_list
#include <initializer_list> // std::initializer_list<bool>::size
#include <initializer_list> // std::initializer_list<int>::begin
#include <initializer_list> // std::initializer_list<int>::end
#include <initializer_list> // std::initializer_list<int>::initializer_list
#include <initializer_list> // std::initializer_list<int>::size
#include <initializer_list> // std::initializer_list<std::pair<int, double> >::begin
#include <initializer_list> // std::initializer_list<std::pair<int, double> >::end
#include <initializer_list> // std::initializer_list<std::pair<int, double> >::initializer_list
#include <initializer_list> // std::initializer_list<std::pair<int, double> >::size
#include <iterator> // __gnu_cxx::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<CFace *, std::vector<CFace, std::allocator<CFace> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<const CEdge *, std::vector<CEdge, std::allocator<CEdge> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<const CPoint3D *, std::vector<CPoint3D, std::allocator<CPoint3D> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteInfoAtVertex *, std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<const QuoteWindow *, std::vector<QuoteWindow, std::allocator<QuoteWindow> > >::operator[]
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::__normal_iterator
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::base
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator*
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator+
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator++
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator+=
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator-
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator--
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator-=
#include <iterator> // __gnu_cxx::__normal_iterator<const std::pair<int, double> *, std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator[]
#include <iterator> // std::reverse_iterator
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::base
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator*
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator+
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator++
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator+=
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator-
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator--
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator-=
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::operator[]
#include <iterator> // std::reverse_iterator<std::_Bit_const_iterator>::reverse_iterator
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::base
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator*
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator+
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator++
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator+=
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator-
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator--
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator-=
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::operator[]
#include <iterator> // std::reverse_iterator<std::_Bit_iterator>::reverse_iterator
#include <list> // std::_List_const_iterator
#include <list> // std::_List_iterator
#include <list> // std::__cxx11::list
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::assign
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::back
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::begin
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::cbegin
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::cend
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::clear
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::empty
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::end
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::erase
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::front
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::get_allocator
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::insert
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::list
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::max_size
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::merge
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::operator=
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::pop_back
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::pop_front
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::push_back
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::push_front
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::remove
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::resize
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::reverse
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::size
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::sort
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::splice
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::swap
#include <list> // std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >::unique
#include <memory> // std::allocator
#include <memory> // std::allocator<CEdge>::allocator
#include <memory> // std::allocator<CEdge>::operator=
#include <memory> // std::allocator<CFace>::allocator
#include <memory> // std::allocator<CFace>::operator=
#include <memory> // std::allocator<CPoint3D>::allocator
#include <memory> // std::allocator<CPoint3D>::operator=
#include <memory> // std::allocator<EdgePoint>::allocator
#include <memory> // std::allocator<EdgePoint>::operator=
#include <memory> // std::allocator<InfoAtAngle>::allocator
#include <memory> // std::allocator<InfoAtAngle>::operator=
#include <memory> // std::allocator<InfoAtVertex>::allocator
#include <memory> // std::allocator<InfoAtVertex>::operator=
#include <memory> // std::allocator<QuoteInfoAtVertex>::allocator
#include <memory> // std::allocator<QuoteInfoAtVertex>::operator=
#include <memory> // std::allocator<QuoteWindow>::allocator
#include <memory> // std::allocator<QuoteWindow>::operator=
#include <memory> // std::allocator<bool>::allocator
#include <memory> // std::allocator<int>::allocator
#include <memory> // std::allocator<int>::operator=
#include <memory> // std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > >::allocator
#include <memory> // std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > >::operator=
#include <memory> // std::allocator<std::pair<int, double> >::allocator
#include <memory> // std::allocator<std::pair<int, double> >::operator=
#include <memory> // std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::allocator
#include <memory> // std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > >::operator=
#include <sstream> // __str__
#include <utility> // std::pair
#include <utility> // std::pair<int, double>::pair
#include <vector> // std::_Bit_const_iterator
#include <vector> // std::_Bit_const_iterator::_Bit_const_iterator
#include <vector> // std::_Bit_const_iterator::_M_const_cast
#include <vector> // std::_Bit_const_iterator::operator*
#include <vector> // std::_Bit_const_iterator::operator+
#include <vector> // std::_Bit_const_iterator::operator++
#include <vector> // std::_Bit_const_iterator::operator+=
#include <vector> // std::_Bit_const_iterator::operator-
#include <vector> // std::_Bit_const_iterator::operator--
#include <vector> // std::_Bit_const_iterator::operator-=
#include <vector> // std::_Bit_const_iterator::operator[]
#include <vector> // std::_Bit_iterator
#include <vector> // std::_Bit_iterator::_Bit_iterator
#include <vector> // std::_Bit_iterator::_M_const_cast
#include <vector> // std::_Bit_iterator::operator*
#include <vector> // std::_Bit_iterator::operator+
#include <vector> // std::_Bit_iterator::operator++
#include <vector> // std::_Bit_iterator::operator+=
#include <vector> // std::_Bit_iterator::operator-
#include <vector> // std::_Bit_iterator::operator--
#include <vector> // std::_Bit_iterator::operator-=
#include <vector> // std::_Bit_iterator::operator=
#include <vector> // std::_Bit_iterator::operator[]
#include <vector> // std::_Bit_reference
#include <vector> // std::_Bit_reference::_Bit_reference
#include <vector> // std::_Bit_reference::flip
#include <vector> // std::_Bit_reference::operator=
#include <vector> // std::_Bit_reference::operator==
#include <vector> // std::vector
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::assign
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::at
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::back
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::begin
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::capacity
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::cbegin
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::cend
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::clear
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::data
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::empty
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::end
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::erase
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::front
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::insert
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::max_size
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::operator=
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::operator[]
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::pop_back
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::push_back
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::reserve
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::resize
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::shrink_to_fit
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::size
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::swap
#include <vector> // std::vector<CEdge, std::allocator<CEdge> >::vector
#include <vector> // std::vector<CFace, std::allocator<CFace> >::assign
#include <vector> // std::vector<CFace, std::allocator<CFace> >::at
#include <vector> // std::vector<CFace, std::allocator<CFace> >::back
#include <vector> // std::vector<CFace, std::allocator<CFace> >::begin
#include <vector> // std::vector<CFace, std::allocator<CFace> >::capacity
#include <vector> // std::vector<CFace, std::allocator<CFace> >::cbegin
#include <vector> // std::vector<CFace, std::allocator<CFace> >::cend
#include <vector> // std::vector<CFace, std::allocator<CFace> >::clear
#include <vector> // std::vector<CFace, std::allocator<CFace> >::data
#include <vector> // std::vector<CFace, std::allocator<CFace> >::empty
#include <vector> // std::vector<CFace, std::allocator<CFace> >::end
#include <vector> // std::vector<CFace, std::allocator<CFace> >::erase
#include <vector> // std::vector<CFace, std::allocator<CFace> >::front
#include <vector> // std::vector<CFace, std::allocator<CFace> >::insert
#include <vector> // std::vector<CFace, std::allocator<CFace> >::max_size
#include <vector> // std::vector<CFace, std::allocator<CFace> >::operator=
#include <vector> // std::vector<CFace, std::allocator<CFace> >::operator[]
#include <vector> // std::vector<CFace, std::allocator<CFace> >::pop_back
#include <vector> // std::vector<CFace, std::allocator<CFace> >::push_back
#include <vector> // std::vector<CFace, std::allocator<CFace> >::reserve
#include <vector> // std::vector<CFace, std::allocator<CFace> >::resize
#include <vector> // std::vector<CFace, std::allocator<CFace> >::shrink_to_fit
#include <vector> // std::vector<CFace, std::allocator<CFace> >::size
#include <vector> // std::vector<CFace, std::allocator<CFace> >::swap
#include <vector> // std::vector<CFace, std::allocator<CFace> >::vector
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::assign
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::at
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::back
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::begin
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::capacity
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::cbegin
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::cend
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::clear
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::data
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::empty
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::end
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::erase
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::front
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::insert
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::max_size
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::operator=
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::operator[]
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::pop_back
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::push_back
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::reserve
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::resize
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::shrink_to_fit
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::size
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::swap
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::vector
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::assign
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::at
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::back
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::begin
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::capacity
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::cbegin
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::cend
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::clear
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::data
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::empty
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::end
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::erase
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::front
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::insert
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::max_size
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::operator=
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::operator[]
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::pop_back
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::push_back
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::reserve
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::resize
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::shrink_to_fit
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::size
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::swap
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::vector
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::assign
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::at
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::back
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::begin
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::capacity
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::cbegin
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::cend
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::clear
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::data
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::empty
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::end
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::erase
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::front
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::insert
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::max_size
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::operator=
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::operator[]
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::pop_back
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::push_back
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::reserve
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::resize
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::shrink_to_fit
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::size
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::swap
#include <vector> // std::vector<InfoAtAngle, std::allocator<InfoAtAngle> >::vector
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::assign
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::at
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::back
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::begin
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::capacity
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::cbegin
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::cend
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::clear
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::data
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::empty
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::end
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::erase
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::front
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::insert
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::max_size
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::operator=
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::operator[]
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::pop_back
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::push_back
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::reserve
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::resize
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::shrink_to_fit
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::size
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::swap
#include <vector> // std::vector<InfoAtVertex, std::allocator<InfoAtVertex> >::vector
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::assign
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::at
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::back
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::begin
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::capacity
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::cbegin
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::cend
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::clear
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::data
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::empty
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::end
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::erase
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::front
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::insert
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::max_size
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::operator=
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::operator[]
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::pop_back
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::push_back
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::reserve
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::resize
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::shrink_to_fit
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::size
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::swap
#include <vector> // std::vector<QuoteInfoAtVertex, std::allocator<QuoteInfoAtVertex> >::vector
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::assign
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::at
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::back
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::begin
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::capacity
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::cbegin
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::cend
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::clear
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::data
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::empty
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::end
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::erase
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::front
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::insert
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::max_size
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::operator=
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::operator[]
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::pop_back
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::push_back
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::reserve
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::resize
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::shrink_to_fit
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::size
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::swap
#include <vector> // std::vector<QuoteWindow, std::allocator<QuoteWindow> >::vector
#include <vector> // std::vector<bool, std::allocator<bool> >::assign
#include <vector> // std::vector<bool, std::allocator<bool> >::at
#include <vector> // std::vector<bool, std::allocator<bool> >::back
#include <vector> // std::vector<bool, std::allocator<bool> >::begin
#include <vector> // std::vector<bool, std::allocator<bool> >::capacity
#include <vector> // std::vector<bool, std::allocator<bool> >::cbegin
#include <vector> // std::vector<bool, std::allocator<bool> >::cend
#include <vector> // std::vector<bool, std::allocator<bool> >::clear
#include <vector> // std::vector<bool, std::allocator<bool> >::crbegin
#include <vector> // std::vector<bool, std::allocator<bool> >::crend
#include <vector> // std::vector<bool, std::allocator<bool> >::data
#include <vector> // std::vector<bool, std::allocator<bool> >::empty
#include <vector> // std::vector<bool, std::allocator<bool> >::end
#include <vector> // std::vector<bool, std::allocator<bool> >::erase
#include <vector> // std::vector<bool, std::allocator<bool> >::flip
#include <vector> // std::vector<bool, std::allocator<bool> >::front
#include <vector> // std::vector<bool, std::allocator<bool> >::get_allocator
#include <vector> // std::vector<bool, std::allocator<bool> >::insert
#include <vector> // std::vector<bool, std::allocator<bool> >::max_size
#include <vector> // std::vector<bool, std::allocator<bool> >::operator=
#include <vector> // std::vector<bool, std::allocator<bool> >::operator[]
#include <vector> // std::vector<bool, std::allocator<bool> >::pop_back
#include <vector> // std::vector<bool, std::allocator<bool> >::push_back
#include <vector> // std::vector<bool, std::allocator<bool> >::rbegin
#include <vector> // std::vector<bool, std::allocator<bool> >::rend
#include <vector> // std::vector<bool, std::allocator<bool> >::reserve
#include <vector> // std::vector<bool, std::allocator<bool> >::resize
#include <vector> // std::vector<bool, std::allocator<bool> >::shrink_to_fit
#include <vector> // std::vector<bool, std::allocator<bool> >::size
#include <vector> // std::vector<bool, std::allocator<bool> >::swap
#include <vector> // std::vector<bool, std::allocator<bool> >::vector
#include <vector> // std::vector<int, std::allocator<int> >::assign
#include <vector> // std::vector<int, std::allocator<int> >::at
#include <vector> // std::vector<int, std::allocator<int> >::back
#include <vector> // std::vector<int, std::allocator<int> >::begin
#include <vector> // std::vector<int, std::allocator<int> >::capacity
#include <vector> // std::vector<int, std::allocator<int> >::cbegin
#include <vector> // std::vector<int, std::allocator<int> >::cend
#include <vector> // std::vector<int, std::allocator<int> >::clear
#include <vector> // std::vector<int, std::allocator<int> >::data
#include <vector> // std::vector<int, std::allocator<int> >::empty
#include <vector> // std::vector<int, std::allocator<int> >::end
#include <vector> // std::vector<int, std::allocator<int> >::erase
#include <vector> // std::vector<int, std::allocator<int> >::front
#include <vector> // std::vector<int, std::allocator<int> >::insert
#include <vector> // std::vector<int, std::allocator<int> >::max_size
#include <vector> // std::vector<int, std::allocator<int> >::operator=
#include <vector> // std::vector<int, std::allocator<int> >::operator[]
#include <vector> // std::vector<int, std::allocator<int> >::pop_back
#include <vector> // std::vector<int, std::allocator<int> >::push_back
#include <vector> // std::vector<int, std::allocator<int> >::reserve
#include <vector> // std::vector<int, std::allocator<int> >::resize
#include <vector> // std::vector<int, std::allocator<int> >::shrink_to_fit
#include <vector> // std::vector<int, std::allocator<int> >::size
#include <vector> // std::vector<int, std::allocator<int> >::swap
#include <vector> // std::vector<int, std::allocator<int> >::vector
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::assign
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::at
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::back
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::begin
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::capacity
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::cbegin
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::cend
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::clear
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::data
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::empty
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::end
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::erase
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::front
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::insert
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::max_size
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::operator=
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::operator[]
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::pop_back
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::push_back
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::reserve
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::resize
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::shrink_to_fit
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::size
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::swap
#include <vector> // std::vector<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> >, std::allocator<std::__cxx11::list<CPoint3D, std::allocator<CPoint3D> > > >::vector
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::assign
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::at
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::back
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::begin
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::capacity
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::cbegin
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::cend
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::clear
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::data
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::empty
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::end
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::front
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::max_size
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::operator=
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::operator[]
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::pop_back
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::push_back
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::reserve
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::resize
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::shrink_to_fit
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::size
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::swap
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::vector
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::assign
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::at
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::back
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::begin
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::capacity
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::cbegin
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::cend
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::clear
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::data
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::empty
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::end
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::erase
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::front
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::insert
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::max_size
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::operator=
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::operator[]
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::pop_back
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::push_back
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::reserve
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::resize
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::shrink_to_fit
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::size
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::swap
#include <vector> // std::vector<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >, std::allocator<std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > > > >::vector

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_std_stl_vector(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	// std::vector file:bits/stl_vector.h line:214
	binder::vector_binder<CPoint3D,std::allocator<CPoint3D>>(M("std"), "CPoint3D", "std_allocator_CPoint3D_t");

	// std::vector file:bits/stl_vector.h line:214
	binder::vector_binder<CFace,std::allocator<CFace>>(M("std"), "CFace", "std_allocator_CFace_t");

	// std::vector file:bits/stl_vector.h line:214
	binder::vector_binder<std::pair<int, double>,std::allocator<std::pair<int, double> >>(M("std"), "std_pair_int_double_t", "std_allocator_std_pair_int_double_t");

	// std::vector file:bits/stl_vector.h line:214
	binder::vector_binder<EdgePoint,std::allocator<EdgePoint>>(M("std"), "EdgePoint", "std_allocator_EdgePoint_t");

}


// File: std/stl_set.cpp
#include <functional> // std::less
#include <functional> // std::less<int>::less
#include <functional> // std::less<int>::operator()
#include <functional> // std::less<int>::operator=
#include <initializer_list> // std::initializer_list
#include <initializer_list> // std::initializer_list<int>::begin
#include <initializer_list> // std::initializer_list<int>::end
#include <initializer_list> // std::initializer_list<int>::initializer_list
#include <initializer_list> // std::initializer_list<int>::size
#include <map> // std::_Rb_tree_const_iterator
#include <map> // std::_Rb_tree_const_iterator<int>::_M_const_cast
#include <map> // std::_Rb_tree_const_iterator<int>::_Rb_tree_const_iterator
#include <map> // std::_Rb_tree_const_iterator<int>::operator!=
#include <map> // std::_Rb_tree_const_iterator<int>::operator*
#include <map> // std::_Rb_tree_const_iterator<int>::operator++
#include <map> // std::_Rb_tree_const_iterator<int>::operator--
#include <map> // std::_Rb_tree_const_iterator<int>::operator==
#include <map> // std::_Rb_tree_iterator
#include <memory> // std::allocator
#include <memory> // std::allocator<int>::allocator
#include <memory> // std::allocator<int>::operator=
#include <set> // std::set
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::begin
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::cbegin
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::cend
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::clear
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::count
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::empty
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::end
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::equal_range
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::erase
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::find
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::get_allocator
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::insert
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::key_comp
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::lower_bound
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::max_size
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::operator=
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::set
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::size
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::swap
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::upper_bound
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::value_comp
#include <sstream> // __str__
#include <utility> // std::pair
#include <utility> // std::pair<std::_Rb_tree_const_iterator<int>, bool>::pair

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_std_stl_set(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // std::set file:bits/stl_set.h line:90
		pybind11::class_<std::set<int>, std::shared_ptr<std::set<int>>> cl(M("std"), "set_int_t", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def("__init__", [](std::set<int> *self_, const struct std::less<int> & a0) { new (self_) std::set<int>(a0); }, "doc");
		cl.def(pybind11::init<const struct std::less<int> &, const class std::allocator<int> &>(), pybind11::arg("__comp"), pybind11::arg("__a"));

		cl.def(pybind11::init<const class std::set<int, struct std::less<int>, class std::allocator<int> > &>(), pybind11::arg("__x"));

		cl.def("__init__", [](std::set<int> *self_, class std::initializer_list<int>  const &a0) { new (self_) std::set<int>(a0); }, "doc");
		cl.def("__init__", [](std::set<int> *self_, class std::initializer_list<int>  const &a0, const struct std::less<int> & a1) { new (self_) std::set<int>(a0, a1); }, "doc");
		cl.def(pybind11::init<class std::initializer_list<int>, const struct std::less<int> &, const class std::allocator<int> &>(), pybind11::arg("__l"), pybind11::arg("__comp"), pybind11::arg("__a"));

		cl.def(pybind11::init<const class std::allocator<int> &>(), pybind11::arg("__a"));

		cl.def(pybind11::init<const class std::set<int, struct std::less<int>, class std::allocator<int> > &, const class std::allocator<int> &>(), pybind11::arg("__x"), pybind11::arg("__a"));

		cl.def(pybind11::init<class std::initializer_list<int>, const class std::allocator<int> &>(), pybind11::arg("__l"), pybind11::arg("__a"));

		cl.def("assign", (class std::set<int, struct std::less<int>, class std::allocator<int> > & (std::set<int>::*)(const class std::set<int, struct std::less<int>, class std::allocator<int> > &)) &std::set<int, std::less<int>, std::allocator<int> >::operator=, "C++: std::set<int, std::less<int>, std::allocator<int> >::operator=(const class std::set<int, struct std::less<int>, class std::allocator<int> > &) --> class std::set<int, struct std::less<int>, class std::allocator<int> > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (class std::set<int, struct std::less<int>, class std::allocator<int> > & (std::set<int>::*)(class std::initializer_list<int>)) &std::set<int, std::less<int>, std::allocator<int> >::operator=, "C++: std::set<int, std::less<int>, std::allocator<int> >::operator=(class std::initializer_list<int>) --> class std::set<int, struct std::less<int>, class std::allocator<int> > &", pybind11::return_value_policy::automatic, pybind11::arg("__l"));
		cl.def("key_comp", (struct std::less<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::key_comp, "C++: std::set<int, std::less<int>, std::allocator<int> >::key_comp() const --> struct std::less<int>");
		cl.def("value_comp", (struct std::less<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::value_comp, "C++: std::set<int, std::less<int>, std::allocator<int> >::value_comp() const --> struct std::less<int>");
		cl.def("get_allocator", (class std::allocator<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::get_allocator, "C++: std::set<int, std::less<int>, std::allocator<int> >::get_allocator() const --> class std::allocator<int>");
		cl.def("begin", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::begin, "C++: std::set<int, std::less<int>, std::allocator<int> >::begin() const --> struct std::_Rb_tree_const_iterator<int>");
		cl.def("end", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::end, "C++: std::set<int, std::less<int>, std::allocator<int> >::end() const --> struct std::_Rb_tree_const_iterator<int>");
		cl.def("cbegin", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::cbegin, "C++: std::set<int, std::less<int>, std::allocator<int> >::cbegin() const --> struct std::_Rb_tree_const_iterator<int>");
		cl.def("cend", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::cend, "C++: std::set<int, std::less<int>, std::allocator<int> >::cend() const --> struct std::_Rb_tree_const_iterator<int>");
		cl.def("empty", (bool (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::empty, "C++: std::set<int, std::less<int>, std::allocator<int> >::empty() const --> bool");
		cl.def("size", (unsigned long (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::size, "C++: std::set<int, std::less<int>, std::allocator<int> >::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::set<int>::*)() const) &std::set<int, std::less<int>, std::allocator<int> >::max_size, "C++: std::set<int, std::less<int>, std::allocator<int> >::max_size() const --> unsigned long");
		cl.def("swap", (void (std::set<int>::*)(class std::set<int, struct std::less<int>, class std::allocator<int> > &)) &std::set<int, std::less<int>, std::allocator<int> >::swap, "C++: std::set<int, std::less<int>, std::allocator<int> >::swap(class std::set<int, struct std::less<int>, class std::allocator<int> > &) --> void", pybind11::arg("__x"));
		cl.def("insert", (struct std::pair<struct std::_Rb_tree_const_iterator<int>, bool> (std::set<int>::*)(const int &)) &std::set<int, std::less<int>, std::allocator<int> >::insert, "C++: std::set<int, std::less<int>, std::allocator<int> >::insert(const int &) --> struct std::pair<struct std::_Rb_tree_const_iterator<int>, bool>", pybind11::arg("__x"));
		cl.def("insert", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)(struct std::_Rb_tree_const_iterator<int>, const int &)) &std::set<int, std::less<int>, std::allocator<int> >::insert, "C++: std::set<int, std::less<int>, std::allocator<int> >::insert(struct std::_Rb_tree_const_iterator<int>, const int &) --> struct std::_Rb_tree_const_iterator<int>", pybind11::arg("__position"), pybind11::arg("__x"));
		cl.def("insert", (void (std::set<int>::*)(class std::initializer_list<int>)) &std::set<int, std::less<int>, std::allocator<int> >::insert, "C++: std::set<int, std::less<int>, std::allocator<int> >::insert(class std::initializer_list<int>) --> void", pybind11::arg("__l"));
		cl.def("erase", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)(struct std::_Rb_tree_const_iterator<int>)) &std::set<int, std::less<int>, std::allocator<int> >::erase, "C++: std::set<int, std::less<int>, std::allocator<int> >::erase(struct std::_Rb_tree_const_iterator<int>) --> struct std::_Rb_tree_const_iterator<int>", pybind11::arg("__position"));
		cl.def("erase", (unsigned long (std::set<int>::*)(const int &)) &std::set<int, std::less<int>, std::allocator<int> >::erase, "C++: std::set<int, std::less<int>, std::allocator<int> >::erase(const int &) --> unsigned long", pybind11::arg("__x"));
		cl.def("erase", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)(struct std::_Rb_tree_const_iterator<int>, struct std::_Rb_tree_const_iterator<int>)) &std::set<int, std::less<int>, std::allocator<int> >::erase, "C++: std::set<int, std::less<int>, std::allocator<int> >::erase(struct std::_Rb_tree_const_iterator<int>, struct std::_Rb_tree_const_iterator<int>) --> struct std::_Rb_tree_const_iterator<int>", pybind11::arg("__first"), pybind11::arg("__last"));
		cl.def("clear", (void (std::set<int>::*)()) &std::set<int, std::less<int>, std::allocator<int> >::clear, "C++: std::set<int, std::less<int>, std::allocator<int> >::clear() --> void");
		cl.def("count", (unsigned long (std::set<int>::*)(const int &) const) &std::set<int, std::less<int>, std::allocator<int> >::count, "C++: std::set<int, std::less<int>, std::allocator<int> >::count(const int &) const --> unsigned long", pybind11::arg("__x"));
		cl.def("find", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)(const int &)) &std::set<int, std::less<int>, std::allocator<int> >::find, "C++: std::set<int, std::less<int>, std::allocator<int> >::find(const int &) --> struct std::_Rb_tree_const_iterator<int>", pybind11::arg("__x"));
		cl.def("lower_bound", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)(const int &)) &std::set<int, std::less<int>, std::allocator<int> >::lower_bound, "C++: std::set<int, std::less<int>, std::allocator<int> >::lower_bound(const int &) --> struct std::_Rb_tree_const_iterator<int>", pybind11::arg("__x"));
		cl.def("upper_bound", (struct std::_Rb_tree_const_iterator<int> (std::set<int>::*)(const int &)) &std::set<int, std::less<int>, std::allocator<int> >::upper_bound, "C++: std::set<int, std::less<int>, std::allocator<int> >::upper_bound(const int &) --> struct std::_Rb_tree_const_iterator<int>", pybind11::arg("__x"));
		cl.def("equal_range", (struct std::pair<struct std::_Rb_tree_const_iterator<int>, struct std::_Rb_tree_const_iterator<int> > (std::set<int>::*)(const int &)) &std::set<int, std::less<int>, std::allocator<int> >::equal_range, "C++: std::set<int, std::less<int>, std::allocator<int> >::equal_range(const int &) --> struct std::pair<struct std::_Rb_tree_const_iterator<int>, struct std::_Rb_tree_const_iterator<int> >", pybind11::arg("__x"));
	}
}


// File: Point3D.cpp
#include <BaseModel.hpp> // CBaseModel
#include <BaseModel.hpp> // CBaseModel::AdjustScaleAndComputeNormalsToVerts
#include <BaseModel.hpp> // CBaseModel::CBaseModel
#include <BaseModel.hpp> // CBaseModel::Face
#include <BaseModel.hpp> // CBaseModel::Finalize
#include <BaseModel.hpp> // CBaseModel::GetNumOfFaces
#include <BaseModel.hpp> // CBaseModel::GetNumOfVerts
#include <BaseModel.hpp> // CBaseModel::LoadModel
#include <BaseModel.hpp> // CBaseModel::Normal
#include <BaseModel.hpp> // CBaseModel::Vert
#include <BaseModel.hpp> // CBaseModel::isAValidModel
#include <BaseModel.hpp> // CBaseModel::operator=
#include <BaseModel.hpp> // CFace
#include <BaseModel.hpp> // CFace::CFace
#include <BaseModel.hpp> // CFace::operator=
#include <BaseModel.hpp> // CFace::operator[]
#include <BaseModel.hpp> // CFace::setIndices
#include <Point3D.hpp> // AngleBetween
#include <Point3D.hpp> // CPoint3D
#include <Point3D.hpp> // CPoint3D::CPoint3D
#include <Point3D.hpp> // CPoint3D::Len
#include <Point3D.hpp> // CPoint3D::Normalize
#include <Point3D.hpp> // CPoint3D::operator*=
#include <Point3D.hpp> // CPoint3D::operator+=
#include <Point3D.hpp> // CPoint3D::operator-=
#include <Point3D.hpp> // CPoint3D::operator/
#include <Point3D.hpp> // CPoint3D::operator/=
#include <Point3D.hpp> // CPoint3D::operator=
#include <Point3D.hpp> // CPoint3D::operator==
#include <Point3D.hpp> // GetTriangleArea
#include <Point3D.hpp> // VectorCross
#include <Point3D.hpp> // VectorDot
#include <RichModel.hpp> // CEdge
#include <RichModel.hpp> // CEdge::CEdge
#include <RichModel.hpp> // CEdge::operator=
#include <RichModel.hpp> // CRichModel
#include <RichModel.hpp> // CRichModel::AngleSum
#include <RichModel.hpp> // CRichModel::CRichModel
#include <RichModel.hpp> // CRichModel::ClearEdges
#include <RichModel.hpp> // CRichModel::CombinePointAndNormalTo
#include <RichModel.hpp> // CRichModel::CombineTwoNormalsTo
#include <RichModel.hpp> // CRichModel::ComputeShiftPoint
#include <RichModel.hpp> // CRichModel::DistanceToIncidentAngle
#include <RichModel.hpp> // CRichModel::Edge
#include <RichModel.hpp> // CRichModel::GetEdgeIndexFromTwoVertices
#include <RichModel.hpp> // CRichModel::GetNew2DCoordinatesByReversingCurrentEdge
#include <RichModel.hpp> // CRichModel::GetNew2DCoordinatesByRotatingAroundLeftChildEdge
#include <RichModel.hpp> // CRichModel::GetNew2DCoordinatesByRotatingAroundRightChildEdge
#include <RichModel.hpp> // CRichModel::GetNumOfBoundries
#include <RichModel.hpp> // CRichModel::GetNumOfComponents
#include <RichModel.hpp> // CRichModel::GetNumOfEdges
#include <RichModel.hpp> // CRichModel::GetNumOfGenera
#include <RichModel.hpp> // CRichModel::GetNumOfIsolated
#include <RichModel.hpp> // CRichModel::GetNumOfTotalUndirectedEdges
#include <RichModel.hpp> // CRichModel::GetNumOfValidDirectedEdges
#include <RichModel.hpp> // CRichModel::GetSubindexToVert
#include <RichModel.hpp> // CRichModel::HasBeenProcessed
#include <RichModel.hpp> // CRichModel::IsClosedModel
#include <RichModel.hpp> // CRichModel::IsConvexVert
#include <RichModel.hpp> // CRichModel::IsExtremeEdge
#include <RichModel.hpp> // CRichModel::IsStartEdge
#include <RichModel.hpp> // CRichModel::Neigh
#include <RichModel.hpp> // CRichModel::Preprocess
#include <RichModel.hpp> // CRichModel::ProportionOnEdgeByImage
#include <RichModel.hpp> // CRichModel::ProportionOnLeftEdgeByImage
#include <RichModel.hpp> // CRichModel::ProportionOnRightEdgeByImage
#include <RichModel.hpp> // CRichModel::SetEdgeLength
#include <RichModel.hpp> // CRichModel::UpdateAfterChangingEdgeLengths
#include <RichModel.hpp> // CRichModel::isBoundaryVert
#include <initializer_list> // std::initializer_list
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <sstream> // __str__
#include <utility> // std::pair
#include <utility> // std::pair<double, double>::pair
#include <vector> // std::vector
#include <vector> // std::vector<CFace, std::allocator<CFace> >::assign
#include <vector> // std::vector<CFace, std::allocator<CFace> >::at
#include <vector> // std::vector<CFace, std::allocator<CFace> >::back
#include <vector> // std::vector<CFace, std::allocator<CFace> >::begin
#include <vector> // std::vector<CFace, std::allocator<CFace> >::capacity
#include <vector> // std::vector<CFace, std::allocator<CFace> >::cbegin
#include <vector> // std::vector<CFace, std::allocator<CFace> >::cend
#include <vector> // std::vector<CFace, std::allocator<CFace> >::clear
#include <vector> // std::vector<CFace, std::allocator<CFace> >::data
#include <vector> // std::vector<CFace, std::allocator<CFace> >::empty
#include <vector> // std::vector<CFace, std::allocator<CFace> >::end
#include <vector> // std::vector<CFace, std::allocator<CFace> >::erase
#include <vector> // std::vector<CFace, std::allocator<CFace> >::front
#include <vector> // std::vector<CFace, std::allocator<CFace> >::insert
#include <vector> // std::vector<CFace, std::allocator<CFace> >::max_size
#include <vector> // std::vector<CFace, std::allocator<CFace> >::operator=
#include <vector> // std::vector<CFace, std::allocator<CFace> >::operator[]
#include <vector> // std::vector<CFace, std::allocator<CFace> >::pop_back
#include <vector> // std::vector<CFace, std::allocator<CFace> >::push_back
#include <vector> // std::vector<CFace, std::allocator<CFace> >::reserve
#include <vector> // std::vector<CFace, std::allocator<CFace> >::resize
#include <vector> // std::vector<CFace, std::allocator<CFace> >::shrink_to_fit
#include <vector> // std::vector<CFace, std::allocator<CFace> >::size
#include <vector> // std::vector<CFace, std::allocator<CFace> >::swap
#include <vector> // std::vector<CFace, std::allocator<CFace> >::vector
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::assign
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::at
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::back
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::begin
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::capacity
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::cbegin
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::cend
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::clear
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::data
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::empty
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::end
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::erase
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::front
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::insert
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::max_size
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::operator=
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::operator[]
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::pop_back
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::push_back
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::reserve
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::resize
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::shrink_to_fit
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::size
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::swap
#include <vector> // std::vector<CPoint3D, std::allocator<CPoint3D> >::vector
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::assign
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::at
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::back
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::begin
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::capacity
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::cbegin
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::cend
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::clear
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::data
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::empty
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::end
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::front
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::max_size
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::operator=
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::operator[]
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::pop_back
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::push_back
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::reserve
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::resize
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::shrink_to_fit
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::size
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::swap
#include <vector> // std::vector<std::pair<int, double>, std::allocator<std::pair<int, double> > >::vector

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_Point3D(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // CPoint3D file:Point3D.hpp line:8
		pybind11::class_<CPoint3D, std::shared_ptr<CPoint3D>> cl(M(""), "CPoint3D", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<double, double, double>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));

		cl.def(pybind11::init<const struct CPoint3D &>(), pybind11::arg(""));

		cl.def_readwrite("x", &CPoint3D::x);
		cl.def_readwrite("y", &CPoint3D::y);
		cl.def_readwrite("z", &CPoint3D::z);
		cl.def("__iadd__", (struct CPoint3D & (CPoint3D::*)(const struct CPoint3D &)) &CPoint3D::operator+=, "C++: CPoint3D::operator+=(const struct CPoint3D &) --> struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg("pt"));
		cl.def("__isub__", (struct CPoint3D & (CPoint3D::*)(const struct CPoint3D &)) &CPoint3D::operator-=, "C++: CPoint3D::operator-=(const struct CPoint3D &) --> struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg("pt"));
		cl.def("__imul__", (struct CPoint3D & (CPoint3D::*)(double)) &CPoint3D::operator*=, "C++: CPoint3D::operator*=(double) --> struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg("times"));
		cl.def("__idiv__", (struct CPoint3D & (CPoint3D::*)(double)) &CPoint3D::operator/=, "C++: CPoint3D::operator/=(double) --> struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg("times"));
		cl.def("__div__", (struct CPoint3D (CPoint3D::*)(double) const) &CPoint3D::operator/, "C++: CPoint3D::operator/(double) const --> struct CPoint3D", pybind11::arg("times"));
		cl.def("Len", (double (CPoint3D::*)() const) &CPoint3D::Len, "C++: CPoint3D::Len() const --> double");
		cl.def("Normalize", (void (CPoint3D::*)()) &CPoint3D::Normalize, "C++: CPoint3D::Normalize() --> void");
		cl.def("__eq__", (bool (CPoint3D::*)(const struct CPoint3D &) const) &CPoint3D::operator==, "C++: CPoint3D::operator==(const struct CPoint3D &) const --> bool", pybind11::arg("other"));
		cl.def("assign", (struct CPoint3D & (CPoint3D::*)(const struct CPoint3D &)) &CPoint3D::operator=, "C++: CPoint3D::operator=(const struct CPoint3D &) --> struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	// VectorCross(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &) file:Point3D.hpp line:82
	M("").def("VectorCross", (struct CPoint3D (*)(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &)) &VectorCross, "C++: VectorCross(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &) --> struct CPoint3D", pybind11::arg("pt1"), pybind11::arg("pt2"), pybind11::arg("pt3"));

	// VectorCross(const float *, const float *, float *) file:Point3D.hpp line:83
	M("").def("VectorCross", (void (*)(const float *, const float *, float *)) &VectorCross, "C++: VectorCross(const float *, const float *, float *) --> void", pybind11::arg("u"), pybind11::arg("v"), pybind11::arg("n"));

	// GetTriangleArea(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &) file:Point3D.hpp line:86
	M("").def("GetTriangleArea", (double (*)(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &)) &GetTriangleArea, "C++: GetTriangleArea(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &) --> double", pybind11::arg("pt1"), pybind11::arg("pt2"), pybind11::arg("pt3"));

	// AngleBetween(const struct CPoint3D &, const struct CPoint3D &) file:Point3D.hpp line:87
	M("").def("AngleBetween", (double (*)(const struct CPoint3D &, const struct CPoint3D &)) &AngleBetween, "C++: AngleBetween(const struct CPoint3D &, const struct CPoint3D &) --> double", pybind11::arg("pt1"), pybind11::arg("pt2"));

	// AngleBetween(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &) file:Point3D.hpp line:88
	M("").def("AngleBetween", (double (*)(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &)) &AngleBetween, "C++: AngleBetween(const struct CPoint3D &, const struct CPoint3D &, const struct CPoint3D &) --> double", pybind11::arg("pt1"), pybind11::arg("pt2"), pybind11::arg("pt3"));

	// VectorDot(const float *, const float *) file:Point3D.hpp line:89
	M("").def("VectorDot", (float (*)(const float *, const float *)) &VectorDot, "C++: VectorDot(const float *, const float *) --> float", pybind11::arg("u"), pybind11::arg("v"));

	// AngleBetween(const float *, const float *) file:Point3D.hpp line:90
	M("").def("AngleBetween", (float (*)(const float *, const float *)) &AngleBetween, "C++: AngleBetween(const float *, const float *) --> float", pybind11::arg("u"), pybind11::arg("v"));

	{ // CFace file:BaseModel.hpp line:10
		pybind11::class_<CFace, std::shared_ptr<CFace>> cl(M(""), "CFace", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<int, int, int>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));

		cl.def(pybind11::init<const struct CFace &>(), pybind11::arg(""));

		cl.def("setIndices", (void (CFace::*)(int, int, int)) &CFace::setIndices, "C++: CFace::setIndices(int, int, int) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("__getitem__", (int & (CFace::*)(int)) &CFace::operator[], "C++: CFace::operator[](int) --> int &", pybind11::return_value_policy::automatic, pybind11::arg("index"));
		cl.def("assign", (struct CFace & (CFace::*)(const struct CFace &)) &CFace::operator=, "C++: CFace::operator=(const struct CFace &) --> struct CFace &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // CBaseModel file:BaseModel.hpp line:38
		pybind11::class_<CBaseModel, std::shared_ptr<CBaseModel>> cl(M(""), "CBaseModel", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const class CBaseModel &>(), pybind11::arg(""));

		cl.def_readwrite("m_Verts", &CBaseModel::m_Verts);
		cl.def_readwrite("m_NormalsToVerts", &CBaseModel::m_NormalsToVerts);
		cl.def_readwrite("m_ptUp", &CBaseModel::m_ptUp);
		cl.def_readwrite("m_ptDown", &CBaseModel::m_ptDown);
		cl.def_readwrite("m_center", &CBaseModel::m_center);
		cl.def_readwrite("m_Faces", &CBaseModel::m_Faces);
		cl.def_readwrite("m_scale", &CBaseModel::m_scale);
		cl.def_readwrite("m_fBeLoaded", &CBaseModel::m_fBeLoaded);
		cl.def("LoadModel", (void (CBaseModel::*)(class std::vector<struct CPoint3D, class std::allocator<struct CPoint3D> >, class std::vector<struct CFace, class std::allocator<struct CFace> >)) &CBaseModel::LoadModel, "C++: CBaseModel::LoadModel(class std::vector<struct CPoint3D, class std::allocator<struct CPoint3D> >, class std::vector<struct CFace, class std::allocator<struct CFace> >) --> void", pybind11::arg("vertices"), pybind11::arg("faces"));
		cl.def("Finalize", (void (CBaseModel::*)()) &CBaseModel::Finalize, "C++: CBaseModel::Finalize() --> void");
		cl.def("isAValidModel", (bool (CBaseModel::*)()) &CBaseModel::isAValidModel, "C++: CBaseModel::isAValidModel() --> bool");
		cl.def("AdjustScaleAndComputeNormalsToVerts", (void (CBaseModel::*)()) &CBaseModel::AdjustScaleAndComputeNormalsToVerts, "C++: CBaseModel::AdjustScaleAndComputeNormalsToVerts() --> void");
		cl.def("GetNumOfVerts", (int (CBaseModel::*)() const) &CBaseModel::GetNumOfVerts, "C++: CBaseModel::GetNumOfVerts() const --> int");
		cl.def("GetNumOfFaces", (int (CBaseModel::*)() const) &CBaseModel::GetNumOfFaces, "C++: CBaseModel::GetNumOfFaces() const --> int");
		cl.def("Vert", (const struct CPoint3D & (CBaseModel::*)(int) const) &CBaseModel::Vert, "C++: CBaseModel::Vert(int) const --> const struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg("vertIndex"));
		cl.def("Normal", (const struct CPoint3D & (CBaseModel::*)(int) const) &CBaseModel::Normal, "C++: CBaseModel::Normal(int) const --> const struct CPoint3D &", pybind11::return_value_policy::automatic, pybind11::arg("vertIndex"));
		cl.def("Face", (const struct CFace & (CBaseModel::*)(int) const) &CBaseModel::Face, "C++: CBaseModel::Face(int) const --> const struct CFace &", pybind11::return_value_policy::automatic, pybind11::arg("faceIndex"));
		cl.def("assign", (class CBaseModel & (CBaseModel::*)(const class CBaseModel &)) &CBaseModel::operator=, "C++: CBaseModel::operator=(const class CBaseModel &) --> class CBaseModel &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // CEdge file:RichModel.hpp line:13
		pybind11::class_<CEdge, std::shared_ptr<CEdge>> cl(M(""), "CEdge", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const struct CEdge &>(), pybind11::arg(""));

		cl.def_readwrite("indexOfLeftVert", &CEdge::indexOfLeftVert);
		cl.def_readwrite("indexOfRightVert", &CEdge::indexOfRightVert);
		cl.def_readwrite("indexOfOppositeVert", &CEdge::indexOfOppositeVert);
		cl.def_readwrite("indexOfLeftEdge", &CEdge::indexOfLeftEdge);
		cl.def_readwrite("indexOfRightEdge", &CEdge::indexOfRightEdge);
		cl.def_readwrite("indexOfReverseEdge", &CEdge::indexOfReverseEdge);
		cl.def_readwrite("indexOfFrontFace", &CEdge::indexOfFrontFace);
		cl.def_readwrite("length", &CEdge::length);
		cl.def_readwrite("coordOfOppositeVert", &CEdge::coordOfOppositeVert);
		cl.def_readwrite("matrixRotatedToLeftEdge", &CEdge::matrixRotatedToLeftEdge);
		cl.def_readwrite("matrixRotatedToRightEdge", &CEdge::matrixRotatedToRightEdge);
		cl.def("assign", (struct CEdge & (CEdge::*)(const struct CEdge &)) &CEdge::operator=, "C++: CEdge::operator=(const struct CEdge &) --> struct CEdge &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // CRichModel file:RichModel.hpp line:37
		pybind11::class_<CRichModel, std::shared_ptr<CRichModel>, CBaseModel> cl(M(""), "CRichModel", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const class CRichModel &>(), pybind11::arg(""));

		cl.def_readwrite("m_Edges", &CRichModel::m_Edges);
		cl.def("Preprocess", (void (CRichModel::*)()) &CRichModel::Preprocess, "C++: CRichModel::Preprocess() --> void");
		cl.def("ClearEdges", (void (CRichModel::*)()) &CRichModel::ClearEdges, "C++: CRichModel::ClearEdges() --> void");
		cl.def("GetSubindexToVert", (int (CRichModel::*)(int, int) const) &CRichModel::GetSubindexToVert, "C++: CRichModel::GetSubindexToVert(int, int) const --> int", pybind11::arg("root"), pybind11::arg("neigh"));
		cl.def("Edge", (const struct CEdge & (CRichModel::*)(int) const) &CRichModel::Edge, "C++: CRichModel::Edge(int) const --> const struct CEdge &", pybind11::return_value_policy::automatic, pybind11::arg("edgeIndex"));
		cl.def("Neigh", (const class std::vector<struct std::pair<int, double>, class std::allocator<struct std::pair<int, double> > > & (CRichModel::*)(int) const) &CRichModel::Neigh, "C++: CRichModel::Neigh(int) const --> const class std::vector<struct std::pair<int, double>, class std::allocator<struct std::pair<int, double> > > &", pybind11::return_value_policy::automatic, pybind11::arg("root"));
		cl.def("AngleSum", (double (CRichModel::*)(int) const) &CRichModel::AngleSum, "C++: CRichModel::AngleSum(int) const --> double", pybind11::arg("vertIndex"));
		cl.def("ProportionOnEdgeByImage", (double (CRichModel::*)(int, const struct std::pair<double, double> &) const) &CRichModel::ProportionOnEdgeByImage, "C++: CRichModel::ProportionOnEdgeByImage(int, const struct std::pair<double, double> &) const --> double", pybind11::arg("edgeIndex"), pybind11::arg("coord"));
		cl.def("ProportionOnLeftEdgeByImage", (double (CRichModel::*)(int, const struct std::pair<double, double> &, double) const) &CRichModel::ProportionOnLeftEdgeByImage, "C++: CRichModel::ProportionOnLeftEdgeByImage(int, const struct std::pair<double, double> &, double) const --> double", pybind11::arg("edgeIndex"), pybind11::arg("coord"), pybind11::arg("proportion"));
		cl.def("ProportionOnRightEdgeByImage", (double (CRichModel::*)(int, const struct std::pair<double, double> &, double) const) &CRichModel::ProportionOnRightEdgeByImage, "C++: CRichModel::ProportionOnRightEdgeByImage(int, const struct std::pair<double, double> &, double) const --> double", pybind11::arg("edgeIndex"), pybind11::arg("coord"), pybind11::arg("proportion"));
		cl.def("ProportionOnEdgeByImage", (double (CRichModel::*)(int, double, double, double, double) const) &CRichModel::ProportionOnEdgeByImage, "C++: CRichModel::ProportionOnEdgeByImage(int, double, double, double, double) const --> double", pybind11::arg("edgeIndex"), pybind11::arg("x1"), pybind11::arg("y1"), pybind11::arg("x2"), pybind11::arg("y2"));
		cl.def("GetNew2DCoordinatesByRotatingAroundLeftChildEdge", (struct std::pair<double, double> (CRichModel::*)(int, const struct std::pair<double, double> &) const) &CRichModel::GetNew2DCoordinatesByRotatingAroundLeftChildEdge, "C++: CRichModel::GetNew2DCoordinatesByRotatingAroundLeftChildEdge(int, const struct std::pair<double, double> &) const --> struct std::pair<double, double>", pybind11::arg("edgeIndex"), pybind11::arg("input2DCoordinates"));
		cl.def("GetNew2DCoordinatesByRotatingAroundRightChildEdge", (struct std::pair<double, double> (CRichModel::*)(int, const struct std::pair<double, double> &) const) &CRichModel::GetNew2DCoordinatesByRotatingAroundRightChildEdge, "C++: CRichModel::GetNew2DCoordinatesByRotatingAroundRightChildEdge(int, const struct std::pair<double, double> &) const --> struct std::pair<double, double>", pybind11::arg("edgeIndex"), pybind11::arg("input2DCoordinates"));
		cl.def("GetNew2DCoordinatesByReversingCurrentEdge", (struct std::pair<double, double> (CRichModel::*)(int, const struct std::pair<double, double> &) const) &CRichModel::GetNew2DCoordinatesByReversingCurrentEdge, "C++: CRichModel::GetNew2DCoordinatesByReversingCurrentEdge(int, const struct std::pair<double, double> &) const --> struct std::pair<double, double>", pybind11::arg("edgeIndex"), pybind11::arg("input2DCoordinates"));
		cl.def("DistanceToIncidentAngle", (double (CRichModel::*)(int, const struct std::pair<double, double> &) const) &CRichModel::DistanceToIncidentAngle, "C++: CRichModel::DistanceToIncidentAngle(int, const struct std::pair<double, double> &) const --> double", pybind11::arg("edgeIndex"), pybind11::arg("coord"));
		cl.def("GetNumOfEdges", (int (CRichModel::*)() const) &CRichModel::GetNumOfEdges, "C++: CRichModel::GetNumOfEdges() const --> int");
		cl.def("GetNumOfValidDirectedEdges", (int (CRichModel::*)() const) &CRichModel::GetNumOfValidDirectedEdges, "C++: CRichModel::GetNumOfValidDirectedEdges() const --> int");
		cl.def("GetNumOfTotalUndirectedEdges", (int (CRichModel::*)() const) &CRichModel::GetNumOfTotalUndirectedEdges, "C++: CRichModel::GetNumOfTotalUndirectedEdges() const --> int");
		cl.def("GetNumOfGenera", (int (CRichModel::*)() const) &CRichModel::GetNumOfGenera, "C++: CRichModel::GetNumOfGenera() const --> int");
		cl.def("GetNumOfIsolated", (int (CRichModel::*)() const) &CRichModel::GetNumOfIsolated, "C++: CRichModel::GetNumOfIsolated() const --> int");
		cl.def("GetNumOfComponents", (int (CRichModel::*)() const) &CRichModel::GetNumOfComponents, "C++: CRichModel::GetNumOfComponents() const --> int");
		cl.def("GetNumOfBoundries", (int (CRichModel::*)() const) &CRichModel::GetNumOfBoundries, "C++: CRichModel::GetNumOfBoundries() const --> int");
		cl.def("IsConvexVert", (bool (CRichModel::*)(int) const) &CRichModel::IsConvexVert, "C++: CRichModel::IsConvexVert(int) const --> bool", pybind11::arg("index"));
		cl.def("isBoundaryVert", (bool (CRichModel::*)(int) const) &CRichModel::isBoundaryVert, "C++: CRichModel::isBoundaryVert(int) const --> bool", pybind11::arg("index"));
		cl.def("IsClosedModel", (bool (CRichModel::*)() const) &CRichModel::IsClosedModel, "C++: CRichModel::IsClosedModel() const --> bool");
		cl.def("IsExtremeEdge", (bool (CRichModel::*)(int) const) &CRichModel::IsExtremeEdge, "C++: CRichModel::IsExtremeEdge(int) const --> bool", pybind11::arg("edgeIndex"));
		cl.def("IsStartEdge", (bool (CRichModel::*)(int) const) &CRichModel::IsStartEdge, "C++: CRichModel::IsStartEdge(int) const --> bool", pybind11::arg("edgeIndex"));
		cl.def("HasBeenProcessed", (bool (CRichModel::*)() const) &CRichModel::HasBeenProcessed, "C++: CRichModel::HasBeenProcessed() const --> bool");
		cl.def("GetEdgeIndexFromTwoVertices", (int (CRichModel::*)(int, int) const) &CRichModel::GetEdgeIndexFromTwoVertices, "C++: CRichModel::GetEdgeIndexFromTwoVertices(int, int) const --> int", pybind11::arg("leftVert"), pybind11::arg("rightVert"));
		cl.def("SetEdgeLength", (void (CRichModel::*)(int, int, double, bool)) &CRichModel::SetEdgeLength, "C++: CRichModel::SetEdgeLength(int, int, double, bool) --> void", pybind11::arg("leftVert"), pybind11::arg("rightVert"), pybind11::arg("newLen"), pybind11::arg("apply_reverse"));
		cl.def("UpdateAfterChangingEdgeLengths", (void (CRichModel::*)()) &CRichModel::UpdateAfterChangingEdgeLengths, "C++: CRichModel::UpdateAfterChangingEdgeLengths() --> void");
		cl.def("ComputeShiftPoint", (struct CPoint3D (CRichModel::*)(int) const) &CRichModel::ComputeShiftPoint, "C++: CRichModel::ComputeShiftPoint(int) const --> struct CPoint3D", pybind11::arg("indexOfVert"));
		cl.def("ComputeShiftPoint", (struct CPoint3D (CRichModel::*)(int, double) const) &CRichModel::ComputeShiftPoint, "C++: CRichModel::ComputeShiftPoint(int, double) const --> struct CPoint3D", pybind11::arg("indexOfVert"), pybind11::arg("epsilon"));
		cl.def_static("CombinePointAndNormalTo", (struct CPoint3D (*)(const struct CPoint3D &, const struct CPoint3D &)) &CRichModel::CombinePointAndNormalTo, "C++: CRichModel::CombinePointAndNormalTo(const struct CPoint3D &, const struct CPoint3D &) --> struct CPoint3D", pybind11::arg("pt"), pybind11::arg("normal"));
		cl.def_static("CombineTwoNormalsTo", (struct CPoint3D (*)(const struct CPoint3D &, double, const struct CPoint3D &, double)) &CRichModel::CombineTwoNormalsTo, "C++: CRichModel::CombineTwoNormalsTo(const struct CPoint3D &, double, const struct CPoint3D &, double) --> struct CPoint3D", pybind11::arg("pt1"), pybind11::arg("coef1"), pybind11::arg("pt2"), pybind11::arg("coef2"));
	}
}


// File: RichModel.cpp
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::BuildSequenceTree
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::CExactMethodForDGP
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::ClearContainers
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::Execute
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::FillExperimentalResults
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::FindSourceVertex
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetAlgorithmName
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetDepthOfSequenceTree
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetMaxLenOfQue
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetMemoryCost
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetNPE
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetRootSourceOfVert
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetRunTime
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::GetWindowNum
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::HasBeenCompleted
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::InitContainers
#include <ExactMethodForDGP.hpp> // CExactMethodForDGP::PickShortestPaths
#include <ExactMethodForDGP.hpp> // GetTickCount
#include <ExactMethodForDGP.hpp> // InfoAtVertex
#include <ExactMethodForDGP.hpp> // InfoAtVertex::InfoAtVertex
#include <ExactMethodForDGP.hpp> // InfoAtVertex::operator=
#include <ExactMethodForDGP.hpp> // QuoteInfoAtVertex
#include <ExactMethodForDGP.hpp> // QuoteInfoAtVertex::QuoteInfoAtVertex
#include <ExactMethodForDGP.hpp> // QuoteInfoAtVertex::operator=
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::AddIntoQueueOfPseudoSources
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::AddIntoQueueOfWindows
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::BuildSequenceTree
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::CICHWithFurtherPriorityQueue
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::ClearContainers
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::InitContainers
#include <ICHWithFurtherPriorityQueue.hpp> // CICHWithFurtherPriorityQueue::UpdateTreeDepthBackWithChoice
#include <ImprovedCHWithEdgeValve.hpp> // CImprovedCHWithEdgeValve
#include <ImprovedCHWithEdgeValve.hpp> // CImprovedCHWithEdgeValve::CImprovedCHWithEdgeValve
#include <ImprovedCHWithEdgeValve.hpp> // CImprovedCHWithEdgeValve::CheckValidityOfWindow
#include <Point3D.hpp> // CPoint3D
#include <Point3D.hpp> // CPoint3D::CPoint3D
#include <Point3D.hpp> // CPoint3D::Len
#include <Point3D.hpp> // CPoint3D::Normalize
#include <Point3D.hpp> // CPoint3D::operator*=
#include <Point3D.hpp> // CPoint3D::operator+=
#include <Point3D.hpp> // CPoint3D::operator-=
#include <Point3D.hpp> // CPoint3D::operator/
#include <Point3D.hpp> // CPoint3D::operator/=
#include <Point3D.hpp> // CPoint3D::operator=
#include <Point3D.hpp> // CPoint3D::operator==
#include <PreviousCH.hpp> // CPreviousCH
#include <PreviousCH.hpp> // CPreviousCH::AddIntoQueueOfPseudoSources
#include <PreviousCH.hpp> // CPreviousCH::AddIntoQueueOfWindows
#include <PreviousCH.hpp> // CPreviousCH::BuildSequenceTree
#include <PreviousCH.hpp> // CPreviousCH::CPreviousCH
#include <PreviousCH.hpp> // CPreviousCH::CheckValidityOfWindow
#include <PreviousCH.hpp> // CPreviousCH::ClearContainers
#include <PreviousCH.hpp> // CPreviousCH::FillExperimentalResults
#include <PreviousCH.hpp> // CPreviousCH::InitContainers
#include <PreviousCH.hpp> // CPreviousCH::UpdateTreeDepthBackWithChoice
#include <PreviousCH.hpp> // InfoAtAngle
#include <PreviousCH.hpp> // InfoAtAngle::InfoAtAngle
#include <PreviousCH.hpp> // InfoAtAngle::operator=
#include <PreviousCH.hpp> // QuoteWindow
#include <PreviousCH.hpp> // QuoteWindow::QuoteWindow
#include <PreviousCH.hpp> // QuoteWindow::operator=
#include <PreviousCH.hpp> // Window
#include <PreviousCH.hpp> // Window::Window
#include <RichModel.hpp> // CEdge
#include <RichModel.hpp> // CRichModel
#include <RichModel.hpp> // CRichModel::AngleSum
#include <RichModel.hpp> // CRichModel::CRichModel
#include <RichModel.hpp> // CRichModel::ClearEdges
#include <RichModel.hpp> // CRichModel::CombinePointAndNormalTo
#include <RichModel.hpp> // CRichModel::CombineTwoNormalsTo
#include <RichModel.hpp> // CRichModel::ComputeShiftPoint
#include <RichModel.hpp> // CRichModel::DistanceToIncidentAngle
#include <RichModel.hpp> // CRichModel::Edge
#include <RichModel.hpp> // CRichModel::GetEdgeIndexFromTwoVertices
#include <RichModel.hpp> // CRichModel::GetNew2DCoordinatesByReversingCurrentEdge
#include <RichModel.hpp> // CRichModel::GetNew2DCoordinatesByRotatingAroundLeftChildEdge
#include <RichModel.hpp> // CRichModel::GetNew2DCoordinatesByRotatingAroundRightChildEdge
#include <RichModel.hpp> // CRichModel::GetNumOfBoundries
#include <RichModel.hpp> // CRichModel::GetNumOfComponents
#include <RichModel.hpp> // CRichModel::GetNumOfEdges
#include <RichModel.hpp> // CRichModel::GetNumOfGenera
#include <RichModel.hpp> // CRichModel::GetNumOfIsolated
#include <RichModel.hpp> // CRichModel::GetNumOfTotalUndirectedEdges
#include <RichModel.hpp> // CRichModel::GetNumOfValidDirectedEdges
#include <RichModel.hpp> // CRichModel::GetSubindexToVert
#include <RichModel.hpp> // CRichModel::HasBeenProcessed
#include <RichModel.hpp> // CRichModel::IsClosedModel
#include <RichModel.hpp> // CRichModel::IsConvexVert
#include <RichModel.hpp> // CRichModel::IsExtremeEdge
#include <RichModel.hpp> // CRichModel::IsStartEdge
#include <RichModel.hpp> // CRichModel::Neigh
#include <RichModel.hpp> // CRichModel::Preprocess
#include <RichModel.hpp> // CRichModel::ProportionOnEdgeByImage
#include <RichModel.hpp> // CRichModel::ProportionOnLeftEdgeByImage
#include <RichModel.hpp> // CRichModel::ProportionOnRightEdgeByImage
#include <RichModel.hpp> // CRichModel::SetEdgeLength
#include <RichModel.hpp> // CRichModel::UpdateAfterChangingEdgeLengths
#include <RichModel.hpp> // CRichModel::isBoundaryVert
#include <RichModel.hpp> // EdgePoint
#include <RichModel.hpp> // EdgePoint::EdgePoint
#include <RichModel.hpp> // EdgePoint::Get3DPoint
#include <RichModel.hpp> // EdgePoint::operator=
#include <functional> // std::less
#include <initializer_list> // std::initializer_list
#include <iterator> // __gnu_cxx::__normal_iterator
#include <map> // std::_Rb_tree_const_iterator
#include <memory> // std::allocator
#include <set> // std::set
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::begin
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::cbegin
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::cend
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::clear
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::count
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::empty
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::end
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::equal_range
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::erase
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::find
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::get_allocator
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::insert
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::key_comp
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::lower_bound
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::max_size
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::operator=
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::set
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::size
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::swap
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::upper_bound
#include <set> // std::set<int, std::less<int>, std::allocator<int> >::value_comp
#include <sstream> // __str__
#include <string> // std::__cxx11::basic_string
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::append
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::assign
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::at
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::back
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::begin
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::cbegin
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::cend
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::clear
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::compare
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::copy
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::data
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::empty
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::end
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::erase
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_not_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_first_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_not_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::find_last_of
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::front
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::get_allocator
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::insert
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::length
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::max_size
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator=
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::operator[]
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::pop_back
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::push_back
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::replace
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::resize
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::rfind
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::shrink_to_fit
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::size
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::substr
#include <string> // std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::swap
#include <string> // std::char_traits
#include <utility> // std::pair
#include <vector> // std::vector
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::assign
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::at
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::back
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::begin
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::capacity
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::cbegin
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::cend
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::clear
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::data
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::empty
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::end
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::erase
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::front
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::insert
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::max_size
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::operator=
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::operator[]
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::pop_back
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::push_back
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::reserve
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::resize
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::shrink_to_fit
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::size
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::swap
#include <vector> // std::vector<EdgePoint, std::allocator<EdgePoint> >::vector

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

// CExactMethodForDGP file:ExactMethodForDGP.hpp line:48
struct PyCallBack_CExactMethodForDGP : public CExactMethodForDGP {
	using CExactMethodForDGP::CExactMethodForDGP;

	void Execute() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CExactMethodForDGP *>(this), "Execute");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CExactMethodForDGP::Execute();
	}
	void InitContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CExactMethodForDGP *>(this), "InitContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"CExactMethodForDGP::InitContainers\"");
	}
	void BuildSequenceTree() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CExactMethodForDGP *>(this), "BuildSequenceTree");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"CExactMethodForDGP::BuildSequenceTree\"");
	}
	void ClearContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CExactMethodForDGP *>(this), "ClearContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"CExactMethodForDGP::ClearContainers\"");
	}
	void FillExperimentalResults() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CExactMethodForDGP *>(this), "FillExperimentalResults");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		pybind11::pybind11_fail("Tried to call pure virtual function \"CExactMethodForDGP::FillExperimentalResults\"");
	}
};

// CPreviousCH file:PreviousCH.hpp line:51
struct PyCallBack_CPreviousCH : public CPreviousCH {
	using CPreviousCH::CPreviousCH;

	void InitContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "InitContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::InitContainers();
	}
	void ClearContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "ClearContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::ClearContainers();
	}
	void BuildSequenceTree() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "BuildSequenceTree");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::BuildSequenceTree();
	}
	void AddIntoQueueOfPseudoSources(struct QuoteInfoAtVertex a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "AddIntoQueueOfPseudoSources");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::AddIntoQueueOfPseudoSources(a0);
	}
	void AddIntoQueueOfWindows(struct QuoteWindow & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "AddIntoQueueOfWindows");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::AddIntoQueueOfWindows(a0);
	}
	bool UpdateTreeDepthBackWithChoice() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "UpdateTreeDepthBackWithChoice");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return CPreviousCH::UpdateTreeDepthBackWithChoice();
	}
	bool CheckValidityOfWindow(struct Window & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "CheckValidityOfWindow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return CPreviousCH::CheckValidityOfWindow(a0);
	}
	void FillExperimentalResults() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "FillExperimentalResults");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::FillExperimentalResults();
	}
	void Execute() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CPreviousCH *>(this), "Execute");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CExactMethodForDGP::Execute();
	}
};

// CImprovedCHWithEdgeValve file:ImprovedCHWithEdgeValve.hpp line:11
struct PyCallBack_CImprovedCHWithEdgeValve : public CImprovedCHWithEdgeValve {
	using CImprovedCHWithEdgeValve::CImprovedCHWithEdgeValve;

	bool CheckValidityOfWindow(struct Window & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "CheckValidityOfWindow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return CImprovedCHWithEdgeValve::CheckValidityOfWindow(a0);
	}
	void InitContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "InitContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::InitContainers();
	}
	void ClearContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "ClearContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::ClearContainers();
	}
	void BuildSequenceTree() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "BuildSequenceTree");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::BuildSequenceTree();
	}
	void AddIntoQueueOfPseudoSources(struct QuoteInfoAtVertex a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "AddIntoQueueOfPseudoSources");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::AddIntoQueueOfPseudoSources(a0);
	}
	void AddIntoQueueOfWindows(struct QuoteWindow & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "AddIntoQueueOfWindows");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::AddIntoQueueOfWindows(a0);
	}
	bool UpdateTreeDepthBackWithChoice() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "UpdateTreeDepthBackWithChoice");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return CPreviousCH::UpdateTreeDepthBackWithChoice();
	}
	void FillExperimentalResults() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "FillExperimentalResults");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::FillExperimentalResults();
	}
	void Execute() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CImprovedCHWithEdgeValve *>(this), "Execute");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CExactMethodForDGP::Execute();
	}
};

// CICHWithFurtherPriorityQueue file:ICHWithFurtherPriorityQueue.hpp line:13
struct PyCallBack_CICHWithFurtherPriorityQueue : public CICHWithFurtherPriorityQueue {
	using CICHWithFurtherPriorityQueue::CICHWithFurtherPriorityQueue;

	void AddIntoQueueOfPseudoSources(struct QuoteInfoAtVertex a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "AddIntoQueueOfPseudoSources");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CICHWithFurtherPriorityQueue::AddIntoQueueOfPseudoSources(a0);
	}
	void AddIntoQueueOfWindows(struct QuoteWindow & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "AddIntoQueueOfWindows");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CICHWithFurtherPriorityQueue::AddIntoQueueOfWindows(a0);
	}
	bool UpdateTreeDepthBackWithChoice() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "UpdateTreeDepthBackWithChoice");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return CICHWithFurtherPriorityQueue::UpdateTreeDepthBackWithChoice();
	}
	void BuildSequenceTree() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "BuildSequenceTree");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CICHWithFurtherPriorityQueue::BuildSequenceTree();
	}
	void InitContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "InitContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CICHWithFurtherPriorityQueue::InitContainers();
	}
	void ClearContainers() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "ClearContainers");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CICHWithFurtherPriorityQueue::ClearContainers();
	}
	bool CheckValidityOfWindow(struct Window & a0) override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "CheckValidityOfWindow");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<bool>::value) {
				static pybind11::detail::overload_caster_t<bool> caster;
				return pybind11::detail::cast_ref<bool>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<bool>(std::move(o));
		}
		return CImprovedCHWithEdgeValve::CheckValidityOfWindow(a0);
	}
	void FillExperimentalResults() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "FillExperimentalResults");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CPreviousCH::FillExperimentalResults();
	}
	void Execute() override { 
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const CICHWithFurtherPriorityQueue *>(this), "Execute");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::overload_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return CExactMethodForDGP::Execute();
	}
};

void bind_RichModel(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // EdgePoint file:RichModel.hpp line:320
		pybind11::class_<EdgePoint, std::shared_ptr<EdgePoint>> cl(M(""), "EdgePoint", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<int>(), pybind11::arg("index"));

		cl.def(pybind11::init<int, double>(), pybind11::arg("index"), pybind11::arg("proportion"));

		cl.def(pybind11::init<const class CRichModel &, int, int, double>(), pybind11::arg("model"), pybind11::arg("leftVert"), pybind11::arg("rightVert"), pybind11::arg("proportion"));

		cl.def(pybind11::init<const struct EdgePoint &>(), pybind11::arg(""));

		cl.def_readwrite("index", &EdgePoint::index);
		cl.def_readwrite("proportion", &EdgePoint::proportion);
		cl.def_readwrite("isVertex", &EdgePoint::isVertex);
		cl.def("Get3DPoint", (struct CPoint3D (EdgePoint::*)(const class CRichModel &)) &EdgePoint::Get3DPoint, "C++: EdgePoint::Get3DPoint(const class CRichModel &) --> struct CPoint3D", pybind11::arg("model"));
		cl.def("assign", (struct EdgePoint & (EdgePoint::*)(const struct EdgePoint &)) &EdgePoint::operator=, "C++: EdgePoint::operator=(const struct EdgePoint &) --> struct EdgePoint &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // InfoAtVertex file:ExactMethodForDGP.hpp line:12
		pybind11::class_<InfoAtVertex, std::shared_ptr<InfoAtVertex>> cl(M(""), "InfoAtVertex", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const struct InfoAtVertex &>(), pybind11::arg(""));

		cl.def_readwrite("fParentIsPseudoSource", &InfoAtVertex::fParentIsPseudoSource);
		cl.def_readwrite("birthTime", &InfoAtVertex::birthTime);
		cl.def_readwrite("indexOfParent", &InfoAtVertex::indexOfParent);
		cl.def_readwrite("indexOfRootVertOfParent", &InfoAtVertex::indexOfRootVertOfParent);
		cl.def_readwrite("level", &InfoAtVertex::level);
		cl.def_readwrite("disUptodate", &InfoAtVertex::disUptodate);
		cl.def_readwrite("entryProp", &InfoAtVertex::entryProp);
		cl.def("assign", (struct InfoAtVertex & (InfoAtVertex::*)(const struct InfoAtVertex &)) &InfoAtVertex::operator=, "C++: InfoAtVertex::operator=(const struct InfoAtVertex &) --> struct InfoAtVertex &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // QuoteInfoAtVertex file:ExactMethodForDGP.hpp line:28
		pybind11::class_<QuoteInfoAtVertex, std::shared_ptr<QuoteInfoAtVertex>> cl(M(""), "QuoteInfoAtVertex", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<char, int, double>(), pybind11::arg("birthTime"), pybind11::arg("indexOfVert"), pybind11::arg("disUptodate"));

		cl.def(pybind11::init<const struct QuoteInfoAtVertex &>(), pybind11::arg(""));

		cl.def_readwrite("birthTime", &QuoteInfoAtVertex::birthTime);
		cl.def_readwrite("indexOfVert", &QuoteInfoAtVertex::indexOfVert);
		cl.def_readwrite("disUptodate", &QuoteInfoAtVertex::disUptodate);
		cl.def("assign", (struct QuoteInfoAtVertex & (QuoteInfoAtVertex::*)(const struct QuoteInfoAtVertex &)) &QuoteInfoAtVertex::operator=, "C++: QuoteInfoAtVertex::operator=(const struct QuoteInfoAtVertex &) --> struct QuoteInfoAtVertex &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // CExactMethodForDGP file:ExactMethodForDGP.hpp line:48
		pybind11::class_<CExactMethodForDGP, std::shared_ptr<CExactMethodForDGP>, PyCallBack_CExactMethodForDGP> cl(M(""), "CExactMethodForDGP", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<const class CRichModel &, const class std::set<int, struct std::less<int>, class std::allocator<int> > &>(), pybind11::arg("inputModel"), pybind11::arg("indexOfSourceVerts"));

		cl.def(pybind11::init<PyCallBack_CExactMethodForDGP const &>());
		cl.def_readwrite("m_InfoAtVertices", &CExactMethodForDGP::m_InfoAtVertices);
		cl.def("GetRootSourceOfVert", (int (CExactMethodForDGP::*)(int) const) &CExactMethodForDGP::GetRootSourceOfVert, "C++: CExactMethodForDGP::GetRootSourceOfVert(int) const --> int", pybind11::arg("index"));
		cl.def("FindSourceVertex", (class std::vector<struct EdgePoint, class std::allocator<struct EdgePoint> > & (CExactMethodForDGP::*)(int, class std::vector<struct EdgePoint, class std::allocator<struct EdgePoint> > &) const) &CExactMethodForDGP::FindSourceVertex, "C++: CExactMethodForDGP::FindSourceVertex(int, class std::vector<struct EdgePoint, class std::allocator<struct EdgePoint> > &) const --> class std::vector<struct EdgePoint, class std::allocator<struct EdgePoint> > &", pybind11::return_value_policy::automatic, pybind11::arg("indexOfVert"), pybind11::arg("resultingPath"));
		cl.def("PickShortestPaths", (void (CExactMethodForDGP::*)(int)) &CExactMethodForDGP::PickShortestPaths, "C++: CExactMethodForDGP::PickShortestPaths(int) --> void", pybind11::arg("num"));
		cl.def("Execute", (void (CExactMethodForDGP::*)()) &CExactMethodForDGP::Execute, "C++: CExactMethodForDGP::Execute() --> void");
		cl.def("InitContainers", (void (CExactMethodForDGP::*)()) &CExactMethodForDGP::InitContainers, "C++: CExactMethodForDGP::InitContainers() --> void");
		cl.def("BuildSequenceTree", (void (CExactMethodForDGP::*)()) &CExactMethodForDGP::BuildSequenceTree, "C++: CExactMethodForDGP::BuildSequenceTree() --> void");
		cl.def("ClearContainers", (void (CExactMethodForDGP::*)()) &CExactMethodForDGP::ClearContainers, "C++: CExactMethodForDGP::ClearContainers() --> void");
		cl.def("FillExperimentalResults", (void (CExactMethodForDGP::*)()) &CExactMethodForDGP::FillExperimentalResults, "C++: CExactMethodForDGP::FillExperimentalResults() --> void");
		cl.def("GetRunTime", (double (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetRunTime, "C++: CExactMethodForDGP::GetRunTime() const --> double");
		cl.def("GetMemoryCost", (double (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetMemoryCost, "C++: CExactMethodForDGP::GetMemoryCost() const --> double");
		cl.def("GetWindowNum", (int (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetWindowNum, "C++: CExactMethodForDGP::GetWindowNum() const --> int");
		cl.def("GetMaxLenOfQue", (int (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetMaxLenOfQue, "C++: CExactMethodForDGP::GetMaxLenOfQue() const --> int");
		cl.def("GetNPE", (double (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetNPE, "C++: CExactMethodForDGP::GetNPE() const --> double");
		cl.def("GetDepthOfSequenceTree", (int (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetDepthOfSequenceTree, "C++: CExactMethodForDGP::GetDepthOfSequenceTree() const --> int");
		cl.def("GetAlgorithmName", (std::string (CExactMethodForDGP::*)() const) &CExactMethodForDGP::GetAlgorithmName, "C++: CExactMethodForDGP::GetAlgorithmName() const --> std::string");
		cl.def("HasBeenCompleted", (bool (CExactMethodForDGP::*)() const) &CExactMethodForDGP::HasBeenCompleted, "C++: CExactMethodForDGP::HasBeenCompleted() const --> bool");
	}
	// GetTickCount() file:ExactMethodForDGP.hpp line:425
	M("").def("GetTickCount", (int (*)()) &GetTickCount, "C++: GetTickCount() --> int");

	{ // InfoAtAngle file:PreviousCH.hpp line:13
		pybind11::class_<InfoAtAngle, std::shared_ptr<InfoAtAngle>> cl(M(""), "InfoAtAngle", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const struct InfoAtAngle &>(), pybind11::arg(""));

		cl.def_readwrite("birthTime", &InfoAtAngle::birthTime);
		cl.def_readwrite("disUptodate", &InfoAtAngle::disUptodate);
		cl.def_readwrite("entryProp", &InfoAtAngle::entryProp);
		cl.def("assign", (struct InfoAtAngle & (InfoAtAngle::*)(const struct InfoAtAngle &)) &InfoAtAngle::operator=, "C++: InfoAtAngle::operator=(const struct InfoAtAngle &) --> struct InfoAtAngle &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // Window file:PreviousCH.hpp line:24
		pybind11::class_<Window, std::shared_ptr<Window>> cl(M(""), "Window", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const struct Window &>(), pybind11::arg(""));

		cl.def_readwrite("fIsOnLeftSubtree", &Window::fIsOnLeftSubtree);
		cl.def_readwrite("fParentIsPseudoSource", &Window::fParentIsPseudoSource);
		cl.def_readwrite("fDirectParentEdgeOnLeft", &Window::fDirectParentEdgeOnLeft);
		cl.def_readwrite("fDirectParenIsPseudoSource", &Window::fDirectParenIsPseudoSource);
		cl.def_readwrite("birthTimeOfParent", &Window::birthTimeOfParent);
		cl.def_readwrite("indexOfParent", &Window::indexOfParent);
		cl.def_readwrite("indexOfRoot", &Window::indexOfRoot);
		cl.def_readwrite("indexOfCurEdge", &Window::indexOfCurEdge);
		cl.def_readwrite("level", &Window::level);
		cl.def_readwrite("disToRoot", &Window::disToRoot);
		cl.def_readwrite("entryPropOfParent", &Window::entryPropOfParent);
		cl.def_readwrite("coordOfPseudoSource", &Window::coordOfPseudoSource);
	}
	{ // QuoteWindow file:PreviousCH.hpp line:40
		pybind11::class_<QuoteWindow, std::shared_ptr<QuoteWindow>> cl(M(""), "QuoteWindow", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<>());

		cl.def(pybind11::init<const struct QuoteWindow &>(), pybind11::arg(""));

		cl.def_readwrite("disUptodate", &QuoteWindow::disUptodate);
		cl.def("assign", (struct QuoteWindow & (QuoteWindow::*)(const struct QuoteWindow &)) &QuoteWindow::operator=, "C++: QuoteWindow::operator=(const struct QuoteWindow &) --> struct QuoteWindow &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // CPreviousCH file:PreviousCH.hpp line:51
		pybind11::class_<CPreviousCH, std::shared_ptr<CPreviousCH>, PyCallBack_CPreviousCH, CExactMethodForDGP> cl(M(""), "CPreviousCH", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<const class CRichModel &, const class std::set<int, struct std::less<int>, class std::allocator<int> > &>(), pybind11::arg("inputModel"), pybind11::arg("indexOfSourceVerts"));

		cl.def(pybind11::init<PyCallBack_CPreviousCH const &>());
	}
	{ // CImprovedCHWithEdgeValve file:ImprovedCHWithEdgeValve.hpp line:11
		pybind11::class_<CImprovedCHWithEdgeValve, std::shared_ptr<CImprovedCHWithEdgeValve>, PyCallBack_CImprovedCHWithEdgeValve, CPreviousCH> cl(M(""), "CImprovedCHWithEdgeValve", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<const class CRichModel &, const class std::set<int, struct std::less<int>, class std::allocator<int> > &>(), pybind11::arg("inputModel"), pybind11::arg("indexOfSourceVerts"));

		cl.def(pybind11::init<PyCallBack_CImprovedCHWithEdgeValve const &>());
	}
	{ // CICHWithFurtherPriorityQueue file:ICHWithFurtherPriorityQueue.hpp line:13
		pybind11::class_<CICHWithFurtherPriorityQueue, std::shared_ptr<CICHWithFurtherPriorityQueue>, PyCallBack_CICHWithFurtherPriorityQueue, CImprovedCHWithEdgeValve> cl(M(""), "CICHWithFurtherPriorityQueue", "");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<const class CRichModel &, const class std::set<int, struct std::less<int>, class std::allocator<int> > &>(), pybind11::arg("inputModel"), pybind11::arg("indexOfSourceVerts"));

		cl.def(pybind11::init<PyCallBack_CICHWithFurtherPriorityQueue const &>());
	}
}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_std_stl_vector(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_stl_set(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_Point3D(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_RichModel(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_PLUGIN(chenhancc) {
	std::map <std::string, std::shared_ptr<pybind11::module> > modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return * it->second;
	};

	modules[""] = std::make_shared<pybind11::module>("chenhancc", "chenhancc module");

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "std"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = std::make_shared<pybind11::module>( modules[p.first]->def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() ) );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_std_stl_vector(M);
	bind_std_stl_set(M);
	bind_Point3D(M);
	bind_RichModel(M);

	return modules[""]->ptr();
}

// Source list file: /home/ashok/eclipse-workspace/chenhancc/autobinding_build/chenhancc.sources
// chenhancc.cpp
// std/stl_vector.cpp
// std/stl_set.cpp
// Point3D.cpp
// RichModel.cpp

// Modules list file: /home/ashok/eclipse-workspace/chenhancc/autobinding_build/chenhancc.modules
// std 
