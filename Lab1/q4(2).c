#include <stdio.h>
#include <stdlib.h>


int main() {
  int x;

  do {
    printf("Enter an integer (0 will exit the program) ");
    scanf("%d", &x);

    if (x == 0) {
      printf("Thank you for using my software. Bye! ");
    } else {
      if (abs((x/10000)) >= 1 && abs((x/10000)) < 10)  {
        printf("The number you entered is 5 digits\n ");
      } else {
        printf("The number you entered is not 5 digits\n ");
      }
    }
  } while (x != 0);
  return 0;
}
