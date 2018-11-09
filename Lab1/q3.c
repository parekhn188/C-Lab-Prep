#include <stdio.h>
#include <stdlib.h>

int main() {
  int number, smallest, numDigits;

  do {
    printf("How many integers will you be entering? Must be positive ");
    scanf("%d", &numDigits);
    if (numDigits == 0) {
      printf("Thank you for using my program ");
      return 0;
    }
  } while (numDigits < 0);

  for (int i = 1; i <= numDigits; i++) {
    printf("Enter integer %d) ", i);
    scanf("%d", &number);

    if (i == 1) {
      smallest = number;
    }

    if (number < smallest) {
      smallest = number;
    }
  }
  printf("The smallest number you typed was %d " , smallest);
  return 0;
}
