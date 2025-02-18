#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int a;
  scanf("%u", &a);
  printf("%u\n", a / 3 * (a / 3 + 1) * 3 / 2);
  return 0;
}

