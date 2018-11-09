#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main() {
  int numbCounter = 0;
  int lookNum, rows = 0, cols = 0, num;
  printf("What number do you want to find? ");
  scanf("%d", &lookNum);
  printf("Enter the rows of your array: ");
  scanf("%d", &rows);
  printf("Enter the cols of your array: ");
  scanf("%d", &cols);

  int intArr[rows][cols];
  //Array Setup
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("Enter the value for %d, %d : ", i, j);
      scanf("%d", &intArr[i][j]);
    }
  }

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (intArr[i][j] == lookNum) {
        numbCounter += 1;
      }
    }
  }
  printf("The number of times %d occurs in the integer array you defined is %d : ", lookNum, numbCounter);
}
