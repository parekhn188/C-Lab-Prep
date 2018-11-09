#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void string_copy(const char source[], char desination[], int n);
int stringLength(const char str[]);

void main() {
  const char source[] = "word";
  int n = 6;
  char desination[n];

  string_copy(source, desination, n);
}

void string_copy(const char source[], char desination[], int n) {
  int length;
  length = stringLength(source);


  if (length > n) {
    printf("Desination arr too small");
    for (int i = 0; i < n - 1; i++) {
      desination[i] = source[i];
      desination[n] = 0;
      printf("%s ", desination);
    }
  } else {

    for (int i = 0; i < n - 1; i++) {
      desination[i] = source[i];
      desination[n] = 0;
    }
    printf("%s ", desination);
  }
}


int stringLength(const char str[]) {
  int strLen = 0;
  for (int i = 0; str[i] != 0; i++) {
    strLen++;
  }
  return strLen;
}
