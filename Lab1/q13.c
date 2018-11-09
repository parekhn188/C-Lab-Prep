#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial (int number);
int eSum (int range);
int power (int num, int power);

void main() {
  // //a)
  // int inputNum, factorial = 1;
  // printf("Factorial of ");
  // scanf("%d", &inputNum);
  //
  //   for (int i = 0; i < inputNum; i++) {
  //   factorial *=  (inputNum - i);
  //   if (inputNum == 0) {
  //     factorial = 1;
  //   }
  // }
  // printf("%d", factorial);

  //b)
    // int inputNum;
    // printf("E value for  ");
    // scanf("%d", &inputNum);
    //
    // double eSum = 1.0;
    // for (int i = 1; i < inputNum; i++) {
    //   eSum += (double) 1 / (double) factorial(i);
    // }
    // printf("%f", eSum);

  //c)
}

int factorial (int x) {
  int fact = 1;
  for (int i = 0; i < x; i++) {
    fact *= (x - i);
    if (x == 0) {
      fact = 1;
    }
  }
 return fact;
}

int power (int num, int power) {
  int val = num;
  for (int i = 1; i <= power; i++) {
    num  = val * num;
  }
  return num;
}

int eSum (int range) {
  double eSum = 1.0;
  for (int i = 1; i < range; i++) {
    eSum += (double) 1 / (double) factorial(i);
  }
  return eSum;
}
