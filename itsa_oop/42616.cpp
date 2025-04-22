#include <iostream>
#include <cmath>

int main() {
  int a;
  std::cin >> a;
  for (unsigned int i = 0; i < 8; i++) {
    std::cout << ((a & (1 << 7)) != 0);
    a <<= 1;
  }
  std::cout << "\n";
  return 0;
}
