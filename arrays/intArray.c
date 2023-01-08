#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   int *array;
   int items;
   int i;
   printf("Number of array: %d\n", argc);
   items = atoi(argv[1]);
   printf("Will generate an array of: %d\n", items);
   array = malloc(sizeof(int) * items);
   printf("Array allocated.\n");
   for(i = 0; i < items; i++) {
      array[i] = (items - i);
   }
   printf("Array Initialized... Printing...\n");
   for(i = 0; i < items; i++) {
      printf("Value by array[%d]: %d - Value by  (array + %d): %d\n", i, array[i], i, *(array + i));
   } 
   printf("Array first element: %d\n", *array);
   printf("Array: %d\n", array);
   printf("That's all...\n");
   return 0;
}
