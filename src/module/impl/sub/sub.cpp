/// @file bob.cpp
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#include <module/impl/sub/sub.h>

#include <boost/make_shared.hpp>


namespace using_modules {
namespace module {
namespace impl {


boost::shared_ptr< IMathOp > makeModule()
{
     return boost::make_shared< Sub >();
}


std::string Sub::name() const
{
     return "Subtractor";
}


int Sub::action( int a, int b )
{
     return a - b;
}


} // namespace impl
} // namespace module
} // namespace using_modules
