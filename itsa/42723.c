#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  isize n;
  scanf("%d", &n);
  if (n < 0) {
    printf("負數\n");

  } else if (n > 0) {
    printf("正數\n");
  } else {
    printf("0\n");
  }
  return 0;
}