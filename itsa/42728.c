#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    usize x;
    scanf("%u", &x);
    printf("%u\n", 50 <= x && x <= 70 ? x : 100);
  }
  return 0;
}