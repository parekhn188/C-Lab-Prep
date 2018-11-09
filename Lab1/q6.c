#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j;
  printf("How many terms would you like to calculate pi ");
  scanf("%d", &n );

  double pi = 0;
  double bottom = 0;
  int sign = -1;

  for (i = 0; i < n; i++) {
    sign = sign * -1;

    bottom = (double) (2*(i) + 1);
    pi += sign * ((double) 4 / bottom);
  }
  printf("Value of pi = %lf", pi);
  return 0;
}
