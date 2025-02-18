#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  unsigned int ans;
  if (n >= 100) {
    ans = n * 70;
  } else if (n >= 30) {
    ans = n * 80;
  } else if (n >= 10) {
    ans = n * 90;
  } else {
    ans = n * 100;
  }
  printf("%u\n", ans);
  return 0;
}

