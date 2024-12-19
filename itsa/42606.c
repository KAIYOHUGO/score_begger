#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  f64 f = 0.9;
  if (n >= 1500) {
    f *= 0.79;
  } else if (n > 800) {
    f *= 0.9;
  } else {
    f *= 1.0;
  }
  printf("%.1lf\n", f * (f64)n);
  return 0;
}