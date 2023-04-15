#include "FirstClass.hpp"

FirstClass::FirstClass(int initialization_variable)
    : a(initialization_variable){};

int FirstClass::GetIncreasedVariable() const { return a + 1; }
