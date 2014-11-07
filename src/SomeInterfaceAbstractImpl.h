#ifndef SOMEINTERFACEABSTRACTIMPL_H
#define SOMEINTERFACEABSTRACTIMPL_H
#pragma once

#include "SomeInterfaceAbstract.h"

namespace app{ namespace some_namespace
{
   class SomeInterfaceAbstractImpl : public SomeInterfaceAbstract
   {
   public:
      SomeInterfaceAbstractImpl();
      ~SomeInterfaceAbstractImpl();

      Flag doSomething(const SomeInterface& other, int paramA, bool paramB) override;

      Flag doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others) override;
   };
}}

#endif