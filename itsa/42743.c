#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a < b + c && b < a + c && c < a + b) {
    printf("fit\n");
  } else {
    printf("unfit\n");
  }
  return 0;
}