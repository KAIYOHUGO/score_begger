#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  int w, h;
  scanf("%d %d", &w, &h);
  double mh = (double)h / 100.0;
  printf("%.2f\n", round(((double)w / (mh * mh)) * 100.0) / 100.0);
  return 0;
}

