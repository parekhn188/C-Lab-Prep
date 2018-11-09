#include <stdio.h>
#include <stdlib.h>

void main() {
  int inputNum;
  int divident = 1;
  float quotient = 10;
  int digitCount = 0;

  printf("Enter a positive integer ");
  scanf("%d", &inputNum);


  while (quotient > 1) {
    quotient = (double)inputNum/(double)divident;
    divident *= 10;
    digitCount++;
  }

  printf("Your number is %d digits ", digitCount-1);
}
