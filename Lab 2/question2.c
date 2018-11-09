#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void isSorted(int arr[], int size) {
  int indexNum;
  for (indexNum = 1; indexNum < size; indexNum++) {
    if (arr[indexNum] < arr[indexNum - 1]) {
      break;
    }

    if (indexNum == size) {
      printf("array is sorted");
    } else {
      printf("array isnt sorted");
    }
  }
}
