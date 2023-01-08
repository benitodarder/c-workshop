#include <stdio.h>
#include <stdlib.h>

struct Argument {
   int pos;
   char *argument;
};

int main(int argc, char *argv[]) {
   struct Argument *array;
   int items;
   int i;
   printf("Number of arguments: %d\n", argc);
   array = (struct Argument*)  malloc(sizeof(struct Argument) * argc);
   printf("Memory allocated.\n");
   for(i = 0; i < argc; i++) {
      struct Argument *current = (struct Argument*) malloc(sizeof(struct Argument));
      current -> pos = i;
      current -> argument = argv[i];
      array[i] = *current;
   }
   printf("Array Initialized... Printing...\n");
   for(i = 0; i < argc; i++) {
      printf("Value by array[%d]: %s - Value by (array + %d): %s\n", array[i].pos, array[i].argument, (array + i)->pos, (array + i)->argument);
   } 
   printf("That's all...\n");
   return 0;
}
