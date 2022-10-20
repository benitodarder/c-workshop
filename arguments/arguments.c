#include <stdio.h>



int main(int argc, char *argv[]) {
   int i;
   printf("Number of arguments: %d\n", argc);
   for (i = 0; i < argc; i++) {
    printf("%d - '%s'\n", i, argv[i]); 
   }
   printf("That's all...\n");
   return 0;
}
