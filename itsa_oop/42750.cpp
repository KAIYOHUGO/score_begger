#include <iostream>
#include <cmath>
#include <stdint.h>

using namespace std;

uint64_t fac(uint64_t n) {
  if (n == 0) {
    return 1;
  }
  return n * fac(n - 1);
}

int main() {
  unsigned int n;
  cin >> n;
  while (n--) {
    unsigned int x;
    cin >> x;
    cout << fac(x) << endl;
  }
  return 0;
}
