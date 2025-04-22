#include <iostream>
#include <cmath>

int main() {
  int w, h;
  std::cin >> w >> h;
  double mh = (double)h / 100.0;
  std::cout << std::fixed << std::setprecision(2) << round(((double)w / (mh * mh)) * 100.0) / 100.0 << std::endl;
  return 0;
}
