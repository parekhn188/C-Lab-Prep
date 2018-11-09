#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N 5


int is_toeplitz(int a[][N], int m); //m x n matrix

int main() {
 int a[4][N] = {9, 2, 1, 0, 4, 7, 9, 2, 1, 0, 3, 7, 9, 2, 1, 5, 3, 7, 9, 2};
 int returnVal;
 returnVal = is_toeplitz(a, 4);
 if (returnVal == 1) {
   printf("Is T");
 } else {
   printf("Is not T");
 }
}


int is_toeplitz(int a[][N], int m) {
  int isT = 0;
  int diagCount = 0;
  int dec = 4;
  int j = 0;

  for(int i = 0; i < m-1; i++) {
    for (int j = 0; j < N-1; j++){
      printf("%d ", a[i][j]);
      printf("\n");
      printf("%d ", a[i+1][j+1]);
      if (a[i][j] != a[i+1][j+1]) {
        isT = 0;
        return isT;
      }
    }
  }
    isT = 1;
    return isT;
  }
