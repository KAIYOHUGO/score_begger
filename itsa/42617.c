#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

void solve(usize a) {
  if (a == 0) {
    return;
  }
  if (a <= 9) {
    printf("%u", a);
  } else {
    printf("%c", 'A' + a - 10);
  }
}

isize main() {
  usize n;
  scanf("%u", &n);
  usize mask = (1 << 4) - 1;
  solve((n >> 8) & mask);
  solve((n >> 4) & mask);
  solve(n & mask);
  printf("\n");
  return 0;
}