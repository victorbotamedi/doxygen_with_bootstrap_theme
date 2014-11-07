#include "SomeInterfaceAbstractImpl.h"
#include "SomeInterfaceImplA.h"
#include "SomeInterfaceImplB.h"

#include <iostream>

int main(int argc, char** argv)
{
   app::implementations::SomeInterfaceImplA implA;
   app::implementations::SomeInterfaceImplB implB;
   app::some_namespace::SomeInterfaceAbstractImpl abstractImpl;
   std::cout << "Hello World! :D" << std::endl;
   return 0;
}
