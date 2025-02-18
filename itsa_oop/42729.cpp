#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  unsigned int n;
  scanf("%u", &n);
  int m = INT_MIN;
  while (n--) {
    int x;
    scanf("%d", &x);
    m = m > x ? m : x;
  }
  printf("%d\n", m);
  return 0;
}

