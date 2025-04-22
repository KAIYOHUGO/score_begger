#include <limits.h>
#include <cmath>
#include <iostream>

int main() {
  unsigned int n;
  std::cin >> n;
  int m = INT_MIN;
  while (n--) {
    int x;
    std::cin >> x;
    m = m > x ? m : x;
  }
  std::cout << m << std::endl;
  return 0;
}
