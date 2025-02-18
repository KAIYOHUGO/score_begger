#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  while (n--) {
    float w;
    scanf("%f", &w);
    printf("%.1f\n", roundf(w * w * 10.0f) / 10.0f);
  }
}

