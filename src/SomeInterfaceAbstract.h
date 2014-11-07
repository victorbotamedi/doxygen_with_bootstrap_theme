#ifndef SOMEINTERFACEABSTRACT_H
#define SOMEINTERFACEABSTRACT_H

#include "SomeInterface.h"

namespace app{ namespace some_namespace
{
   class SomeInterfaceAbstract : public SomeInterface
   {
   public:

      /**
       * Here we do some constructor documentation.
       */
      SomeInterfaceAbstract();
      ~SomeInterfaceAbstract();

      /**
       * \brief overriding the interface's doc.
       *
       * Overriding our interface documentation to see how it
       * does in our doxygen docs.
       *
       * \copydoc
       */
      Flag doSomething() override;

      Flag doSomething(int paramA, bool paramB) override;
   };
}}

#endif