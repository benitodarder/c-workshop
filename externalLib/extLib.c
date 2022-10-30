#include "extLib.h"
#include <string.h>

char *toUppercase(char input[]) {
   int i;
   int inputSize = strlen(input);
   char *output = malloc(inputSize + 1);
   for (i = 0; i < inputSize; i++) {
      if (input[i] > 96 && input[i] < 123) {
         output[i] = input[i] - 32;
      } else {
         output[i] = input[i];
      }
   }
   output[i] = '\0';
   return output;
}
