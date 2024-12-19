#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    u64 x, y;
    scanf("%lu %lu", &x, &y);
    if (x > y) {
      u64 t = y;
      y = x;
      x = t;
    }
    printf("%lu\n", (y * (y + 1) - x * (x - 1)) / 2);
  }

  return 0;
}