#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  std::cout << "NT10=" << n / 10 << std::endl;
  n %= 10;
  std::cout << "NT5=" << n / 5 << std::endl;
  std::cout << "NT1=" << n % 5 << std::endl;

  return 0;
}
