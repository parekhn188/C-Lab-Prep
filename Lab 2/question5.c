#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 3

int is_diag_dom(int mat[][N]);

void main() {
  int mat[3][N] = {7, 2, 3, 4, 15, 6, 7, 8, 27};

  is_diag_dom(mat);

}

int is_diag_dom(int mat[][N]) {
  int val = 0;
  for (int i = 0; i < N; i++) {
      int sum = 0;
      for (int j = 0; j < N; j++) {
          if ( i == j) {
            val = mat[i][j];
        } else {
          sum += mat[i][j];
        }
        printf("Val : %d\n ", val);
        printf("Sum: %d ", sum);
      }
      if (fabs(val) > fabs(sum)) {
        continue;
      } else {
        break;
    }
  }

  printf("\n");
  if (val == mat[N-1][N-1]) {
    printf("The matrix is diag dom");
  } else {
    printf("The matrix is not diag dom");
  }
}
