#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize a;
  scanf("%u", &a);
  printf("%u\n", a / 3 * (a / 3 + 1) * 3 / 2);
  return 0;
}