#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Argument {
   int pos;
   char *argument;
};

int main(int argc, char *argv[]) {
   struct Argument *array;
   int items;
   int i;
   char *aux;
   printf("Number of arguments: %d\n", argc);
   printf("Memory available: %l\n", argc);
   array = (struct Argument*)  malloc(sizeof(struct Argument) * argc);
   printf("Memory allocated.\n");
   for(i = 0; i < argc; i++) {
      struct Argument *current = (struct Argument*) malloc(sizeof(struct Argument));
      current -> pos = strlen(argv[i]);
      current -> argument = (char *) malloc(sizeof(char) * (current -> pos + 1));
      strcpy(current -> argument, argv[i]);
      array[i] = *current;
   }
   printf("Array Initialized... Printing...\n");
   for(i = 0; i < argc; i++) {
      printf("Position %d - By array[%d], size and value: %d %s - By (array + %d): %d %s\n", i, i, array[i].pos, array[i].argument, i, (array + i)->pos, (array + i)->argument);
   } 
   printf("That's all...\n");
   return 0;
}
