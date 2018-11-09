#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //Using for loop
  int forSum = 0, i;
  for (i = 30; i < 1000; i++) {
    if (i % 4 == 0) {
      forSum += i;
      printf("i = %d\n", i);
    }
    printf("sum = %d\n", forSum);
  }

  //Using while loop
  int currentNum = 30;
  int whileSum = 0;
  while (currentNum < 1000) {
    if (currentNum % 4 == 0) {
      whileSum += currentNum;
    }
    printf("sum = %d\n", whileSum);
    currentNum++;
  }

  //Using do while loop
  int doSum = 0;
  int cNum = 30;
  do {
    if (cNum % 4 == 0) {
      doSum += cNum;
    }
    printf("sum = %d\n",doSum );
    cNum++;
  } while (cNum < 1000);
}
