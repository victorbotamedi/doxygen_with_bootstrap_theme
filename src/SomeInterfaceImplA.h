#ifndef SOMEINTERFACEIMPLA_H
#define SOMEINTERFACEIMPLA_H

#include "SomeInterface.h"

namespace app{ namespace implementations
{
   class SomeInterfaceImplA : public SomeInterface
   {
   public:
      SomeInterfaceImplA();
      ~SomeInterfaceImplA();

      Flag doSomething() override;

      Flag doSomething(int paramA, bool paramB) override;

      Flag doSomething(const SomeInterface& other, int paramA, bool paramB) override;

      Flag doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others) override;
   };
}}

#endif