/// @file alice.cpp
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#include <module/impl/add/add.h>

#include <boost/make_shared.hpp>


namespace using_modules {
namespace module {
namespace impl {


boost::shared_ptr< IMathOp > Add::create()
{
     return boost::make_shared< Add >();
}


std::string Add::name() const
{
     return "Adder";
}


int Add::action( int a, int b )
{
     return a + b;
}


} // namespace impl
} // namespace module
} // namespace using_modules
