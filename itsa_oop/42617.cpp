#include <math.h>
#include <stdio.h>
#include <stdint.h>

void solve(unsigned int a) {
  if (a == 0) {
    return;
  }
  if (a <= 9) {
    printf("%u", a);
  } else {
    printf("%c", 'A' + a - 10);
  }
}

int main() {
  unsigned int n;
  scanf("%u", &n);
  unsigned int mask = (1 << 4) - 1;
  solve((n >> 8) & mask);
  solve((n >> 4) & mask);
  solve(n & mask);
  printf("\n");
  return 0;
}

