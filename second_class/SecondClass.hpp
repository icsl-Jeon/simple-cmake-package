#pragma once
#include "first_class/FirstClass.hpp"
class SecondClass {
private:
  FirstClass first_class_;

public:
  SecondClass(int initialization_variable);
  int GetDecreasedVariable() const;
};
