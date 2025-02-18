#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    uint32_t i;
    scanf("%u", &i);
    if (i <= 31) {
      printf("%u\n", 1U << i);
      continue;
    }
    printf("Value of more than 31\n");
  }
  return 0;
}

