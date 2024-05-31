/// @file alice.cpp
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#include <module/impl/add/add.h>
#include <iostream>


namespace using_modules {
namespace module {
namespace impl {


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
