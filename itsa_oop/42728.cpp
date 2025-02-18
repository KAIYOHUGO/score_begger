#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    unsigned int x;
    scanf("%u", &x);
    printf("%u\n", 50 <= x && x <= 70 ? x : 100);
  }
  return 0;
}

