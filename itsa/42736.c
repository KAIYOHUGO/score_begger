#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i += 2) {
    if (i != 1) {
      printf(" ");
    }
    printf("%d", i);
  }
  printf("\n");
  return 0;
}