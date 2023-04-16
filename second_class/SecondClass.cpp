#include "SecondClass.hpp"

SecondClass::SecondClass(int initialization_variable)
    : a(initialization_variable){};

int SecondClass::GetDecreasedVariable() const { return a + 1; }
