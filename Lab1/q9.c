#include <stdio.h>
#include <stdlib.h>

void main() {
  int n, i, j;
  int decrement = 4;
  int cDec = 0;
  int dDec2 = 3;
  int dDec = 2;
  int numbStars = 0;
  printf("Enter an odd integer between 1 and 25 ");
  scanf("%d", &n);

  int vert = 2*n - 1;
  int horizont = 2*n - 1;

  //setup for total tables
  for (i = 0; i < n; i++) {
  //
  //   //Printing Pattern A
  //   for (j = 0; j < horizont; j++) {
  //     printf("*");
  //   }
  //   printf("\n");


  //Printing Pattern B
  //WhiteSpace 1
  //   for (int k = 0; k < decrement; k++) {
  //     printf(" ");
  //   }
  //   //stars
  //   for (int l = 0; l < horizont - 2*decrement; l++) {
  //     printf("*");
  //   }
  //   //WhiteSpace 2
  //   for (int m = 0; m < decrement; m++) {
  //     printf(" ");
  //   }
  //   printf("\n");
  //   decrement--;
  // }

  //Printing Pattern C
  // for (int p = 0; p < horizont - cDec; p++) {
  //   printf("*");
  // }
  // for(int q = 0; q < cDec; q++) {
  //   printf(" ");
  // }
  //   printf("\n");
  //   cDec += 2;
  // }
}
  //Printing Pattern D
  // for (int u = n/2 + 1; u >= 1; u--) {
  //   for (int r = 0; r < dDec; r++) {
  //     printf(" ");
  //   }
  //   for (int s = 0; s < horizont - 2*dDec; s++) {
  //     printf("*");
  //     numbStars += 1;
  //   }
  //   for (int r = 0; r < dDec; r++) {
  //     printf(" ");
  //   }
  //   dDec++;
  //   printf("\n");
  //   }
  //
  //   for (int v = n/2+1; v < n; v++) {
  //     for (int r = 0; r < dDec2; r++) {
  //       printf(" ");
  //     }
  //     for (int s = 0; s < horizont - 2*dDec2; s++) {
  //       printf("*");
  //       numbStars += 1;
  //     }
  //     for (int t = 0; t < dDec2; t++) {
  //       printf(" ");
  //     }
  //     dDec2--;
  //
  //     printf("\n");
  //     }

  printf("%d\n", 5/2);


}
