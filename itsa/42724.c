#include "data_structure/basic.h"
#include <math.h>
#include <stdio.h>

isize main() {
  char a;
  scanf("%c", &a);
  a = a <= 'Z' ? a - 'A' + 'a' : a;
  switch (a) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("母音\n");
    break;
  default:
    printf("子音\n");
    break;
  }
  return 0;
}