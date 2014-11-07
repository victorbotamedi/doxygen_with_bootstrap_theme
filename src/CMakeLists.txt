cmake_minimum_required(VERSION 2.8)
project(doxygen_with_bootstrap_theme CXX)

set(SOURCE
  main.cpp
  SomeInterface.h
  SomeInterfaceAbstract.cpp
  SomeInterfaceAbstract.h
  SomeInterfaceAbstractImpl.cpp
  SomeInterfaceAbstractImpl.h
  SomeInterfaceImplA.cpp
  SomeInterfaceImplA.h
  SomeInterfaceImplB.cpp
  SomeInterfaceImplB.h
  )

INCLUDE_DIRECTORIES(
  ${INCLUDE_DIRECTORIES}
  )

add_executable(doxygen_with_bootstrap_theme ${SOURCE})

target_link_libraries(doxygen_with_bootstrap_theme
  )