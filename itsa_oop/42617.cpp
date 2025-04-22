#include <math.h>
#include <iostream>
#include <stdint.h>

using namespace std;

void solve(unsigned int a) {
  if (a == 0) {
    return;
  }
  if (a <= 9) {
    cout << a;
  } else {
    cout << char('A' + a - 10);
  }
}

int main() {
  unsigned int n;
  cin >> n;
  unsigned int mask = (1 << 4) - 1;
  solve((n >> 8) & mask);
  solve((n >> 4) & mask);
  solve(n & mask);
  cout << endl;
  return 0;
}
