#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize list[3];

  usize max_i = 0;
  scanf("%u %u %u", &list[0], &list[1], &list[2]);
  for (usize i = 0; i < 3; i++) {
    if (list[i] > max_i) {
      max_i = list[i];
    }
  }
  printf("%u\n", max_i);
  return 0;
}