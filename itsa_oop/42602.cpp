#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  double c;
  scanf("%lf", &c);
  printf("%.1f\n", round((c * 9.0 / 5.0 + 32.0) * 10.0) / 10.0);
  return 0;
}

