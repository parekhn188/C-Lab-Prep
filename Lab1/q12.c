#include <stdlib.h>
#include <stdio.h>

void main() {
  int biNum, modNum, decVal, sum, multVal = 1;
  int multiplier = 1;

  printf("Enter a binary number ");
  scanf("%d", &biNum);

  while (biNum >= 1) {
    modNum = biNum % 10;
    sum = modNum * (multiplier);
    decVal += sum;
    biNum = biNum/10;
    multiplier *= 2;
  }
  printf("%d\n", decVal);
}
