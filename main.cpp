#include <FirstClass.hpp>
#include <SecondClass.hpp>
#include <iostream>
int main() {
  int a = 4;
  FirstClass first_class(a);
  SecondClass second_class(a);
  std::cout << first_class.GetIncreasedVariable() << std::endl;
  std::cout << second_class.GetDecreasedVariable() << std::endl;
}