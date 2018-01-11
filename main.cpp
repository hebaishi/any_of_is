#include <iostream>
#include <any_of_is.h>

int main() {
  // This is the proof it works!!!!
  std::cout << "Enter character:\n";
  char c;
  std::cin >> c;
  if(any_of('c', 'd', '1', 'f', '7').is(c)) {
    std::cout << "It's in the set!\n";
  } else {
    std::cout << "It's not in the set!\n";
  }
}
