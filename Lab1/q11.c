#include <stdio.h>
#include <stdlib.h>

void main() {
  int n, reverse = 0;
  printf("Enter a number ");
  scanf("%d", &n);

  while(n != 0) {
    reverse = n % 10;
    n = n/10;
    printf("%d", reverse);
  }
}
