# CMake project quick-starter 😎

## 1. Installation of this package 
```shell
git clone https://github.com/icsl-Jeon/simple-cmake-package.git
cd simple-cmake-package
mkdir build && cd build && cmake ..
make 
sudo make install
```

## 2. Using this package from other package (say, client_package)
### `CMakeLists.txt` of `client_package`
```cmake
cmake_minimum_required(VERSION 3.15.0)
project(client_project)

find_package(SimplePackage REQUIRED)

add_executable(client_project_executable main.cpp)
target_link_libraries(client_project_executable simple_package)

```

### Your `main.cpp` be like this
```cpp
#include <first_class/FirstClass.hpp>
#include <second_class/SecondClass.hpp>

#include <iostream>
int main(int, char **) {
  SecondClass second_class(7);

  std::cout << "Hello, world! " << second_class.GetDecreasedVariable()
            << std::endl;
}

```
