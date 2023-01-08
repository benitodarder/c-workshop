#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   char *array;
   int items;
   int i;
   printf("Number of intArray: %d\n", argc);
   items = atoi(argv[1]);
   printf("Will generate an array of: %d\n", items);
   array = malloc((sizeof(char) * items) + 1);
   printf("Array allocated.\n");
   for(i = 0; i < items; i++) {
      array[i] = i + 65;
   }
   array[i] = 0;
   printf("Array Initialized... Printing...\n");
   for(i = 0; i < items; i++) {
      printf("Value by array[%d]: %c - Value by (array + %d): %c\n", i, array[i], i, *(array + i));
   } 
   printf("Array first element: %c\n", *array);
   printf("Array: %s\n", array);
   printf("That's all...\n");
   return 0;
}
