/// @file alice.h
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#pragma once

#include <module/mathop.h>


namespace using_modules {
namespace module {
namespace impl {


class Add : public IMathOp {
public:
     std::string name() const override;
     int action( int a, int b ) override;
};


} // namespace impl
} // namespace module
} // namespace using_modules
