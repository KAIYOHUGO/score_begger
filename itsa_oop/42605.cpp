#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  printf("%u\n", (n * 1000 + 237) / 238);
  return 0;
}

