#include <math.h>
#include <iostream>
#include <stdint.h>

int main() {
  unsigned int n;
  std::cin >> n;
  while (n--) {
    uint32_t i;
    std::cin >> i;
    if (i <= 31) {
      std::cout << (1U << i) << std::endl;
      continue;
    }
    std::cout << "Value of more than 31" << std::endl;
  }
  return 0;
}
