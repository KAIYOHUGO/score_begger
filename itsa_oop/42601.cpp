#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  int mi;
  scanf("%d", &mi);
  printf("km=%.1f\n", round((double)mi * 1.6 * 10.0) / 10.0);
  return 0;
}

