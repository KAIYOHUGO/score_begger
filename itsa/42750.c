#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

u64 fac(u64 n) {
  if (n == 0) {
    return 1;
  }
  return n * fac(n - 1);
}

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    usize x;
    scanf("%u", &x);
    printf("%lu\n", fac(x));
  }
  return 0;
}