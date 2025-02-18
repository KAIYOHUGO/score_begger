#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  double dx = (double)(x1 - x2);
  double dy = (double)(y1 - y2);
  printf("%.2f\n", round(sqrt(dx * dx + dy * dy) * 100.0) / 100.0);
  return 0;
}

