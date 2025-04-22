#include <iostream>
#include <cmath>

int main() {
  int n;
  std::cin >> n;
  bool first = true;
  for (int i = 1; i <= n; i += 2) {
    if (!first) {
      std::cout << " ";
    }
    std::cout << i;
    first = false;
  }
  std::cout << "\n";
  return 0;
}
