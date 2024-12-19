#include "data_structure/basic.h"
#include <limits.h>
#include <math.h>
#include <stdio.h>

isize main() {
  usize n;
  scanf("%u", &n);
  isize m = INT_MIN;
  while (n--) {
    isize x;
    scanf("%d", &x);
    m = max(m, x);
  }
  printf("%d\n", m);
  return 0;
}