#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void efficient(const int source[], int val[], int pos[], int size) {
  int counter = 0;
  for (int i = 0; i < size; i++) {
    if (source[i] != 0) {
      val[counter] = source[i];
      pos[counter] = i;
      counter ++;
    }
  }
}

void reconstruct(int source[], int m, const int val[], const int pos[], int n) {
  for (int i = 0, j = 0; i < m; i++) {
    source[i] = (i == pos[j]) ? val[j++] : 0; 
  }
}


int main() {
  int size = 8;
  int m = 8;
  int k = 3;
  int n = 3;
  int source2[m];

  const int source[] = {0, 0, 23, 0, -7, 0, 0, 48};
  const int val2[] = {23, -7, 48};
  const int pos2[] = {2, 4, 7};

  int val[k];
  int pos[k];

  efficient(source, val, pos, size);

  for (int i = 0; i < k; i++) {
    printf("i: %d value: %d", i, val[i]);
    printf("\n");
    printf("i: %d , value: %d", i, pos[i]);
    printf("\n");
  }

  reconstruct(source2, m, val2, pos2, n);
  for (int i = 0; i < size; i++) {
    printf("i: %d value: %d", i, source2[i]);
    printf("\n");
  }

}
