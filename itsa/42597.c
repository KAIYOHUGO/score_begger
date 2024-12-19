#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    isize x, y;
    scanf("%d %d", &x, &y);
    printf("%u\n", (x + y) * (x + y));
  }
  return 0;
}