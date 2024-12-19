#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  f64 c;
  scanf("%Lf", &c);
  printf("%.1Lf\n", roundl((c * 9.0 / 5.0 + 32.0) * 10.0) / 10.0);
  return 0;
}