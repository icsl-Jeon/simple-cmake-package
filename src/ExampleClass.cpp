#include "./ExampleClass.hpp"

ExampleClass::ExampleClass(int initialization_variable)
    : a(initialization_variable){};

int ExampleClass::GetIncreasedVariable() const { return a + 1; }
