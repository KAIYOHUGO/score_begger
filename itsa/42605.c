#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  printf("%u\n", (n * 1000 + 237) / 238);
  return 0;
}