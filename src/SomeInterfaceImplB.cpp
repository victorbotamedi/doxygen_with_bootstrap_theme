#include "SomeInterfaceImplB.h"

namespace app{ namespace implementations
{

   SomeInterfaceImplB::SomeInterfaceImplB()
   {

   }

   SomeInterfaceImplB::~SomeInterfaceImplB()
   {

   }

   SomeInterface::Flag SomeInterfaceImplB::doSomething()
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceImplB::doSomething(int paramA, bool paramB)
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceImplB::doSomething(const SomeInterface& other, int paramA, bool paramB)
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceImplB::doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others)
   {
      return ValueA;
   }

}}