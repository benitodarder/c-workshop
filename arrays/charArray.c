#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   char *charArray;
   int items;
   int i;
   printf("Number of intArray: %d\n", argc);
   items = atoi(argv[1]);
   printf("Will generate an array of: %d\n", items);
   charArray = malloc((sizeof(char) * items) + 1);
   printf("Array allocated.\n");
   for(i = 0; i < items; i++) {
      charArray[i] = i + 65;
   }
   charArray[i] = 0;
   printf("Array Initialized... Printing...\n");
   for(i = 0; i < items; i++) {
      printf("Arg: %d - Value: %c\n", i, charArray[i]);
   } 
   printf("Array first element: %c\n", *charArray);
   printf("Array: %s\n", charArray);
   printf("That's all...\n");
   return 0;
}
