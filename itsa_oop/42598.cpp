#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int list[3];

  unsigned int max_i = 0;
  scanf("%u %u %u", &list[0], &list[1], &list[2]);
  for (unsigned int i = 0; i < 3; i++) {
    if (list[i] > max_i) {
      max_i = list[i];
    }
  }
  printf("%u\n", max_i);
  return 0;
}

