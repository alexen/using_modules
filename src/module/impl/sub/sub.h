/// @file bob.h
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#pragma once

#include <module/mathop.h>

#include <boost/dll/alias.hpp>
#include <boost/shared_ptr.hpp>


namespace using_modules {
namespace module {
namespace impl {


class Sub : public IMathOp {
public:
     std::string name() const override;
     int action( int a, int b ) override;
};


/// Для этого модуля в качестве фабрики используем свободную ф-цию
boost::shared_ptr< IMathOp > makeModule();

/// Для всех фабрик используем единый псевдоним @a createModule
BOOST_DLL_ALIAS( ::using_modules::module::impl::makeModule, createModule );


} // namespace impl
} // namespace module
} // namespace using_modules
