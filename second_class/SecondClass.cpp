#include "SecondClass.hpp"

SecondClass::SecondClass(int initialization_variable)
    : first_class_(initialization_variable){};

int SecondClass::GetDecreasedVariable() const {
  return first_class_.GetIncreasedVariable() - 2;
}
