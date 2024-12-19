#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  int w, h;
  scanf("%d %d", &w, &h);
  f64 mh = (f64)h / 100.0;
  printf("%.2Lf\n", roundl(((f64)w / mh / mh) * 100.0) / 100.0);
  return 0;
}