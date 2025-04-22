#include <math.h>
#include <iostream>
#include <stdint.h>

int main() {
  unsigned int n;
  std::cin >> n;
  unsigned int ans;
  if (n >= 100) {
    ans = n * 70;
  } else if (n >= 30) {
    ans = n * 80;
  } else if (n >= 10) {
    ans = n * 90;
  } else {
    ans = n * 100;
  }
  std::cout << ans << std::endl;
  return 0;
}
