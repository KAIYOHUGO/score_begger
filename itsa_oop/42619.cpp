#include <iomanip>
#include <math.h>
#include <iostream>
#include <stdint.h>

int main() {
  int x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;
  double dx = (double)(x1 - x2);
  double dy = (double)(y1 - y2);
  std::cout << std::fixed << std::setprecision(2) << round(sqrt(dx * dx + dy * dy) * 100.0) / 100.0 << std::endl;
  return 0;
}
