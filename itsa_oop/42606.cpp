#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  unsigned int n;
  std::cin >> n;
  double f = 0.9;
  if (n >= 1500) {
    f *= 0.79;
  } else if (n > 800) {
    f *= 0.9;
  } else {
    f *= 1.0;
  }
  std::cout << std::fixed << std::setprecision(1) << f * (double)n << std::endl;
  return 0;
}
