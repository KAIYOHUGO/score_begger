#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int a, b, c;
  scanf("%u %u %u", &a, &b, &c);
  printf("Trapezoid area:%.1f\n", ((double)a + (double)b) * (double)c / 2.0);
  return 0;
}

