#include <stdio.h>
#include <stdlib.h>

int main() {
  int m, i, j;

  printf("Enter an integer m to which you want perfect numbers printed ");
  scanf("%d", &m);
  int factorSum = 0;
  int totalSum = 0;

  for (i = 1; i <= m; i++) {
    for (j = 1; j <= i; j++) {
      if (i%j == 0 && i != j) {
        factorSum += j;
      }
      printf("i = %d, j = %d ",i, j);
      printf("sum = %d\n", factorSum);
      if (factorSum == i && i != 1) {
        printf("%d is a Pefect Numb\n", i);
        factorSum = 0;
      }
    }
    factorSum = 0; 
  }
  return 0;
}
