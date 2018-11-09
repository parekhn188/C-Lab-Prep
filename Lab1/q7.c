#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, k, hype;
  int tCounter = 0;

  for (i = 1; i <= 400; i++) {
    for (j = 1; j <= 400; j++) {
      for (k = 1; k <= 400; k++) {
        if ((i <= j) && ((i*i) + (j*j) == (k*k))) {
          tCounter += 1;
          printf("Tuple (%d, %d, %d) \n", i, j, k);
        }
      }
    }
  }
  printf("Total Tuples Found = %d",tCounter);
  return 0;
}
