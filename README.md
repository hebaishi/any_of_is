# ```any_of(set).is()```

A template header that enables the use of the following syntax in C++ to check if an element is a member of a set:

```c++
std::cout << "Enter character:\n";
char c;
std::cin >> c;
if(any_of('c', 'd', '1', 'f', '7').is(c)) {
  std::cout << "It's in the set!\n";
} else {
  std::cout << "It's not in the set!\n";
}
```

## Requirements

* CMake version >= 3.8
* A compiler with C++17 support. The build instructions below assume GCC 7 is installed.

## Build Instructions:

```sh
mkdir build
cd build
CXX=g++-7 CC=gcc-7 cmake ..
make
./any_of_is
```
