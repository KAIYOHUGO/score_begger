#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  while (n--) {
    f32 w;
    scanf("%lF", &w);
    printf("%.1LF\n", roundl(w * w * 10.0) / 10.0);
  }
}