#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    u64 m;
    scanf("%lu", &m);
    printf("%lu %lu %lu\n", m, m * m, m * m * m);
  }
  return 0;
}