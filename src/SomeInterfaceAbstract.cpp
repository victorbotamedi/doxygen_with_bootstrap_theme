#include "SomeInterfaceAbstract.h"

namespace app{ namespace some_namespace
{
   SomeInterfaceAbstract::SomeInterfaceAbstract()
   {

   }

   SomeInterfaceAbstract::~SomeInterfaceAbstract()
   {

   }

   SomeInterface::Flag SomeInterfaceAbstract::doSomething()
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceAbstract::doSomething(int paramA, bool paramB)
   {
      return ValueA;
   }

}}