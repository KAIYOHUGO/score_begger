#include "data_structure/basic.h"
#include <stdio.h>

isize main() {
  usize w, h;
  scanf("%u %u", &w, &h);
  f64 ans = (f64)w * (f64)h / 2.0;
  printf("Triangle area:%.1Lf\n", ans);
}