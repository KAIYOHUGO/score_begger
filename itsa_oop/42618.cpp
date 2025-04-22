#include <math.h>
#include <iostream>
#include <stdint.h>

int main() {
  unsigned int n;
  std::cin >> n;
  while (n--) {
    uint64_t x, y;
    std::cin >> x >> y;
    if (x > y) {
      uint64_t t = y;
      y = x;
      x = t;
    }
    std::cout << (y * (y + 1) - x * (x - 1)) / 2 << std::endl;
  }

  return 0;
}
