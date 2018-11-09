#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int stringLength(const char str[]) {
  int strLen = 0;
  for (int i = 0; str[i] != 0; i++) {
    strLen++;
  }
  return strLen;
}

void my_strcat(const char str1[], const char str2[], char str3[], int n) {
  int lenStr1, lenStr2;
  lenStr1 = stringLength(str1);
  lenStr2 = stringLength(str2);

  if ((lenStr1 + lenStr1) > n) {
    printf("str3 is too small, please enter a value larger than %d", n);
  }

  for (int i = 0; str1[i] != 0; i++) {
    str3[i] = str1[i];
  }
  for (int i = 0; str2[i] != 0; i++) {
    str3[i+lenStr1] = str2[i];
  }
  printf("%s", str3);
}



int main() {
  const char str1[] = "hello";
  const char str2[] = "world";
  int n = 15;
  char str3[n];

  my_strcat(str1, str2, str3, n);
}
