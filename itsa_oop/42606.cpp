#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  double f = 0.9;
  if (n >= 1500) {
    f *= 0.79;
  } else if (n > 800) {
    f *= 0.9;
  } else {
    f *= 1.0;
  }
  printf("%.1f\n", f * (double)n);
  return 0;
}

