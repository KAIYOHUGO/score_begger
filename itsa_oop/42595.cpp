#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
  }
  return 0;
}

