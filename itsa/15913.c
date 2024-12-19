#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize gcd(isize a, isize b) {
  if (a == 0) {
    return b;
  }
  return gcd(b % a, a);
}

isize main() {
  isize a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", gcd(a, b));
}
