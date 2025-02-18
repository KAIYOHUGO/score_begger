#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%u\n", (unsigned int)((x + y) * (x + y)));
  }
  return 0;
}

