#include <iomanip>
#include <math.h>
#include <iostream>

int main() {
  double c;
  std::cin >> c;
  std::cout << std::fixed << std::setprecision(1) << round((c * 9.0 / 5.0 + 32.0) * 10.0) / 10.0 << std::endl;
  return 0;
}
