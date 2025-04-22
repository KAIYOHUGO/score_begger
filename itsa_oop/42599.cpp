#include <iostream>
#include <cmath>
#include <cstdint>

int main() {
  unsigned int n;
  std::cin >> n;
  while (n--) {
    uint64_t m;
    std::cin >> m;
    std::cout << m << " " << m * m << " " << m * m * m << std::endl;
  }
  return 0;
}
