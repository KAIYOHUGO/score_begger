#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  int mi;
  scanf("%d", &mi);
  printf("km=%.1Lf\n", roundl((f64)mi * 1.6 * 10.0) / 10.0);
  return 0;
}