#ifndef SOMEINTERFACEIMPLB_H
#define SOMEINTERFACEIMPLB_H

#include "SomeInterface.h"

namespace app{ namespace implementations
{
   class SomeInterfaceImplB : public SomeInterface
   {
   public:
      SomeInterfaceImplB();
      ~SomeInterfaceImplB();

      Flag doSomething() override;

      Flag doSomething(int paramA, bool paramB) override;

      Flag doSomething(const SomeInterface& other, int paramA, bool paramB) override;

      Flag doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others) override;
   };
}}

#endif