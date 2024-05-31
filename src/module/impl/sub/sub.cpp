/// @file bob.cpp
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#include <module/impl/sub/sub.h>
#include <iostream>


namespace using_modules {
namespace module {
namespace impl {


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
