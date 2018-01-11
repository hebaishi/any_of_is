# any_of_is

A template header that enables the use of the following syntax in C++ to check if an element is a member of a set.
:

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
