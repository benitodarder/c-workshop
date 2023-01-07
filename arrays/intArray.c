#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   int *intArray;
   int items;
   int i;
   printf("Number of intArray: %d\n", argc);
   items = atoi(argv[1]);
   printf("Will generate an array of: %d\n", items);
   intArray = malloc(sizeof(int) * items);
   printf("Array allocated.\n");
   for(i = 0; i < items; i++) {
      intArray[i] = (items - i);
   }
   printf("Array Initialized... Printing...\n");
   for(i = 0; i < items; i++) {
      printf("Arg: %d - Value: %d\n", i, intArray[i]);
   } 
   printf("Array first element: %d\n", *intArray);
   printf("Array: %d\n", intArray);
   printf("That's all...\n");
   return 0;
}
