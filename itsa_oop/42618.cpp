#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    uint64_t x, y;
    scanf("%lu %lu", &x, &y);
    if (x > y) {
      uint64_t t = y;
      y = x;
      x = t;
    }
    printf("%lu\n", (y * (y + 1) - x * (x - 1)) / 2);
  }

  return 0;
}

