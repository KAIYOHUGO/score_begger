#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  if (n < 0) {
    std::cout << "負數\n";
  } else if (n > 0) {
    std::cout << "正數\n";
  } else {
    std::cout << "0\n";
  }
  return 0;
}
