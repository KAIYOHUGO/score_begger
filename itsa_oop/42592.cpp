#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int w, h;
  scanf("%u %u", &w, &h);
  double ans = (double)w * (double)h / 2.0;
  printf("Triangle area:%.1f\n", ans);
  return 0;
}

