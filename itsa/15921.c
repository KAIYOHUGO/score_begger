#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

usize digit(usize n, usize i) {
  usize d = 1;
  while (i--) {
    d *= 10;
  }
  return n / d % 10;
}

isize main() {
  usize a;
  scanf("%u", &a);
  usize b = a;
  usize m = 0;
  while (b != 0) {
    m++;
    b /= 10;
  }

  for (usize i = 0; i < m / 2; i++) {
    if (digit(a, i) != digit(a, m - i - 1)) {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");
  return 0;
}