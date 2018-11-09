#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define N 4

void print_diag_scan(int mat[ ][N]){
  for (int s=0; s<N; s++) {
      for (int i=s; i>-1; i--) {
        printf("%d ", mat[i][s-i]);
      }
  }

  for (int s=1; s<N; s++) {
      for (int i=N-1; i>=s; i--) {
          printf("%d ", mat[i][s+N-1-i]);
      }
  }
}

void main() {
  int mat[N][N] = {1, 12, 13, 49, 5, 16, 17, 81, 9, 10, 11, 20, 2, 45, 19, 14};
  print_diag_scan(mat);
}
