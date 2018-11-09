#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define ascii_A 65
#define ascii_Z 90
#define ascii_a 97
#define ascii_z 122

void letter_freq(const char word[], int freq[]);


void main() {
  int freq[26];
  const char word[] = "word";
  letter_freq(word, freq);
}

void letter_freq(const char word[], int freq[]){

    for(int charNum = 0; word[charNum] != '\0'; charNum++){

        if((word[charNum] >= ascii_A && word[charNum] <= ascii_Z) || (word[charNum] >= ascii_a && word[charNum] <= ascii_z)){
            (freq[word[charNum] >= ascii_A && word[charNum] <= ascii_Z != 0 ? word[charNum] - 65 : word[charNum] - 97])++;
        }
    }

    for(int alphaNum = 0; alphaNum < 26; alphaNum++){
        printf("The count of '%c' and '%c' is %d \n", alphaNum + 65, alphaNum + 97, freq[alphaNum]);
    }

}
