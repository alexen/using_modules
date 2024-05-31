/// @file alice.h
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#pragma once

#include <module/mathop.h>

#include <boost/dll/alias.hpp>
#include <boost/shared_ptr.hpp>


namespace using_modules {
namespace module {
namespace impl {


class Add : public IMathOp {
public:
     /// В этом модуле в качестве фабрики используем статический метод класса
     static boost::shared_ptr< IMathOp > create();

     std::string name() const override;
     int action( int a, int b ) override;
};


/// Для всех фабрик используем единый псевдоним @a createModule
BOOST_DLL_ALIAS( ::using_modules::module::impl::Add::create, createModule );


} // namespace impl
} // namespace module
} // namespace using_modules
