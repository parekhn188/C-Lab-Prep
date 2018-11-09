#include <stdio.h>
#include <stdlib.h>

int main() {
  double avg;
  int caseVal;
  printf("Enter your average ");
  scanf("%lf", &avg);

  if (90 <= avg && avg <= 100) {
    caseVal = 4;
  }
  if (80 <= avg && avg <= 89) {
    caseVal = 3;
  }
   if (70 <= avg && avg <= 79) {
    caseVal = 2;
  }
   if (60 <= avg && avg <= 69) {
    caseVal = 1;
  }
   if (0 <= avg && avg <= 59) {
    caseVal = 0;
  }

  printf("caseVal = ", caseVal);

  switch (caseVal) {
    case 4:
      printf("4\n");
      break;
    case 3 :
      printf("3\n");
      break;
    case 2 :
      printf("2\n");
      break;
    case 1 :
      printf("1\n");
      break;
    case 0 :
      printf("0\n");
      break;
    default :
      printf("Please enter a vaild input");
  }
  return 0;
}
