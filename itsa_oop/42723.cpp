#include <math.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n < 0) {
    printf("負數\n");
  } else if (n > 0) {
    printf("正數\n");
  } else {
    printf("0\n");
  }
  return 0;
}

