#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize a, b, c;
  scanf("%u %u %u", &a, &b, &c);
  printf("Trapezoid area:%.1lf\n", ((f64)a + (f64)b) * (f64)c / 2.0);
  return 0;
}