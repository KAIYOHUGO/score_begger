#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
  }
  return 0;
}