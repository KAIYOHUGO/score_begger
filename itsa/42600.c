#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    u32 i;
    scanf("%u", &i);
    if (i <= 31) {
      printf("%u\n", 1 << i);
      continue;
    }
    printf("Value of more than 31\n");
  }
  return 0;
}