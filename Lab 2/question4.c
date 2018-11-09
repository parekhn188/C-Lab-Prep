#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void change(int x[], int n) {
  int zeroCounter = 0;
  int tempArr[n];
  int tempInc = 0;

  for (int i = 0; i < n; i++) {
    if (x[i] == 0) {
      zeroCounter += 1;
    } else {
      tempArr[tempInc] = x[i];
      tempInc++;
    }
  }
  //printf("tempInc: %d", tempInc);
  for (int j = tempInc; j < n; j++) {
      tempArr[j] = 0;
  }

  for (int i = 0; i < n; i++) {
    printf("%d, ", tempArr[i]);
  }
}

void main() {
  int size = 0;
  printf("Enter the size of your integer array");
  scanf("%d", &size);

  int intArr[size];

  for (int i = 0; i < size; i++) {
    printf("Enter the value for index %d ", i);
    scanf("%d", &intArr[i]);
  }

  change(intArr, size);

}
