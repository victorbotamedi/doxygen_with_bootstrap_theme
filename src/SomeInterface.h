#ifndef SOMEINTERFACE_H
#define SOMEINTERFACE_H

#include <memory>
#include <vector>

namespace app
{
   /**
    * \brief Sample interface to be shown in doxygen output.
    *
    * This will demonstrate how an interface and it's hierarchy will be
    * shown in our new doxygen theme, as an addition, we also have here an enum and
    * a sample block of code.
    *
    * \code
    *    // this is our main, it's useless...
    *    // it is here only to show some block of code in our documentation.
    *    int main(int argc, char** argv)
    *    {
    *      app::implementations::SomeInterfaceImplA implA;
    *      app::implementations::SomeInterfaceImplB implB;
    *      app::some_namespace::SomeInterfaceAbstractImpl abstractImpl;
    *      std::cout << "Hello World! :D" << std::endl;
    *      return 0;
    *    }
    * \endcode
    */
   class SomeInterface
   {
   public:

      /**
       * Shows how an enumeration documentation will be shown.
       */
      enum Flag
      {
         /**
          * Our first sample value;
          */
         ValueA,

         /**
          * Our second sample value;
          */
         ValueB
      };

      virtual ~SomeInterface() {}

      /**
       * \brief do something special.
       *
       * Our first method, does not receive any parameter.
       *
       * \return a cool Flag value.
       */
      virtual Flag doSomething() = 0;

      /**
       * \brief do something special.
       *
       * Our second method, here we receive some parameters.
       *
       * \param paramA our first parameter.
       * \param paramB our second parameter.
       * \return a cool Flag value.
       */
      virtual Flag doSomething(int paramA, bool paramB) = 0;

      /**
       * \brief do something special.
       *
       * Our third method, here we receive some parameters, one of the is
       * one of our classes to see the class link in our theme.
       *
       * \param other our first parameter.
       * \param paramA our second parameter.
       * \param paramB our third parameter.
       * \return a cool Flag value.
       */
      virtual Flag doSomething(const SomeInterface& other, int paramA, bool paramB) = 0;

      /**
       * \brief do something special.
       *
       * Here we do something special with a container of <code>SomeInterface</code> objects,
       * but wait, it is deprecated.
       *
       * \deprecated this is a deprecated method.
       * \param others our first parameter.
       * \return a cool Flag value.
       */
      virtual Flag doSomething(const std::vector<std::unique_ptr<SomeInterface>>& others) = 0;
   };
}

#endif