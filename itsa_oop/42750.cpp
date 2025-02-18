#include <math.h>
#include <stdio.h>
#include <stdint.h>

uint64_t fac(uint64_t n) {
  if (n == 0) {
    return 1;
  }
  return n * fac(n - 1);
}

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    unsigned int x;
    scanf("%u", &x);
    printf("%llu\n", fac(x));
  }
  return 0;
}

