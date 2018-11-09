#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void isPrefix(const char str1[], char str2[]);

int main() {
  const char str1[] = "base";
  char str2[] = "ba";
  int prefix = 0;
  isPrefix(str1, str2);

}

void isPrefix(const char str1[], char str2[]) {
  int tempval = 0;
  for (int i = 0; str2[i] != 0; i++) {
    if (str2[i] == str1[i]) {
      tempval = 1;
      //printf("%s is a prefix of %s", str2, str1);
    } else {
      tempval = 0;
      //printf("%s is not a prefix of %s", str2, str1);
    }
  }
    if (tempval == 0) {
      printf("%s is not a prefix of %s ", str2, str1);
    } else {
      printf("%s is a prefix of %s ", str2, str1);
    }
}
