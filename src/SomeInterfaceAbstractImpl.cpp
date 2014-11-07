#include "SomeInterfaceAbstractImpl.h"

namespace app{ namespace some_namespace
{

   SomeInterfaceAbstractImpl::SomeInterfaceAbstractImpl()
   {

   }

   SomeInterfaceAbstractImpl::~SomeInterfaceAbstractImpl()
   {

   }

   SomeInterface::Flag SomeInterfaceAbstractImpl::doSomething(const SomeInterface& other, int paramA, bool paramB)
   {
      return ValueA;
   }

   SomeInterface::Flag SomeInterfaceAbstractImpl::doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others)
   {
      return ValueA;
   }

}}