/// @file interface.h
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#pragma once

#include <string>
#include <boost/config.hpp>


namespace using_modules {
namespace module {


class BOOST_SYMBOL_VISIBLE IMathOp {
public:
     virtual ~IMathOp() {}

     virtual std::string name() const = 0;
     virtual int action( int a, int b ) = 0;
};


} // namespace module
} // namespace using_modules
