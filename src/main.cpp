/// @file main.cpp
/// @brief
/// @copyright Copyright 2024 InfoTeCS Internet Trust

#include <stdexcept>
#include <iostream>

#include <boost/shared_ptr.hpp>
#include <boost/dll/import.hpp>
#include <boost/function.hpp>
#include <boost/exception/diagnostic_information.hpp>

#include <module/mathop.h>


int main( int argc, char** argv )
{
     try
     {
          if( argc < 2 )
          {
               BOOST_THROW_EXCEPTION(
                    std::invalid_argument{ "too few parameters: no module path specified" } );
          }

          boost::dll::fs::path modulePath{ argv[ 1 ] };
          std::cout << "Loading module: " << modulePath.string() << '\n';

          using IMathOpPtr = boost::shared_ptr< using_modules::module::IMathOp >;
          /// Сигнатура функции-создателя модуля
          using ModuleCreatorSgn = IMathOpPtr();
          /// Функтор для создания модуля
          using ModuleCreatorFn = boost::function< ModuleCreatorSgn >;

          ModuleCreatorFn creator = boost::dll::import_alias< ModuleCreatorSgn >(
               modulePath
               , "createModule"
               , boost::dll::load_mode::append_decorations
               );

          auto module = creator();

          int a = 7, b = 9;
          std::cout
               << "Name: " << module->name() << '\n'
               << "Op for " << a << " and " << b << ": " << module->action( a, b ) << '\n';
     }
     catch( const std::exception& e )
     {
          std::cerr << "exception: " << boost::diagnostic_information( e ) << '\n';
          return 1;
     }
     return 0;
}
