#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  int a;
  scanf("%d", &a);
  for (unsigned int i = 0; i < 8; i++) {
    printf("%d", (a & (1 << 7)) != 0);
    a <<= 1;
  }
  printf("\n");
  return 0;
}
