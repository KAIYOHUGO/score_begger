#include <iostream>
#include <cmath>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a < b + c && b < a + c && c < a + b) {
    std::cout << "fit\n";
  } else {
    std::cout << "unfit\n";
  }
  return 0;
}
