#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    uint64_t m;
    scanf("%lu", &m);
    printf("%lu %lu %lu\n", m, m * m, m * m * m);
  }
  return 0;
}

