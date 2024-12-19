#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  f64 dx = (f64)(x1 - x2);
  f64 dy = (f64)(y1 - y2);
  printf("%.2Lf\n", roundl(sqrtl(dx * dx + dy * dy) * 100.0) / 100.0);
  return 0;
}