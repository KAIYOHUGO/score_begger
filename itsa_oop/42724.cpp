#include <iostream>
#include <cmath>

int main() {
  char a;
  std::cin >> a;
  a = a <= 'Z' ? a - 'A' + 'a' : a;
  switch (a) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    std::cout << "母音\n";
    break;
  default:
    std::cout << "子音\n";
    break;
  }
  return 0;
}
