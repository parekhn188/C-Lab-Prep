#include <stdio.h>
#include <stdlib.h>

int main() {
  int userNum;
  printf("Input a positive number");
  scanf("%d", &userNum);

  do {
    printf("Input a positive number");
    scanf("%d", &userNum);
  } while (userNum < 0);
  printf("your number is  %d", userNum);
}
