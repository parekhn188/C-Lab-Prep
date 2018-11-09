#include <stdio.h>
#include <stdlib.h>

void main() {
  int x, isPrime, zeroCount = 0;
  printf("Enter an integer");
  scanf("%d", &x);

  for (int i = 1; i <= x; i++) {
    isPrime = x % i;
    if (isPrime == 0 && i != 1 && i != x) {
      zeroCount++;
    }
  }
  if (zeroCount > 0) {
    printf("%d is not a prime integer\n ", x);
  } else if (zeroCount == 0) {
    printf("%d is a prime integer\n ", x);
  }
}
