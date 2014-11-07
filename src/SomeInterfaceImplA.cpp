#include "SomeInterfaceImplA.h"

namespace app{ namespace implementations
{

   SomeInterfaceImplA::SomeInterfaceImplA()
   {

   }

   SomeInterfaceImplA::~SomeInterfaceImplA()
   {

   }

   SomeInterface::Flag SomeInterfaceImplA::doSomething()
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceImplA::doSomething(int paramA, bool paramB)
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceImplA::doSomething(const SomeInterface& other, int paramA, bool paramB)
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceImplA::doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others)
   {
      return ValueA;
   }

}}