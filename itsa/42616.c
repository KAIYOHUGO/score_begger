#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  isize a;
  scanf("%d", &a);
  for (usize i = 0; i < 8; i++) {
    printf("%d", (a & 1 << 7) != 0);
    a <<= 1;
  }
  printf("\n");
  return 0;
}