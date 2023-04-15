#include <ExampleClass.hpp>
#include <iostream>
int main() {
  int a = 4;
  ExampleClass example_class(a);
  std::cout << example_class.GetIncreasedVariable() << std::endl;
}