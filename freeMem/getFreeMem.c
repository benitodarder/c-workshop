
#include <stdio.h>
#include "freemem.h"

int main(int argc, char *argv[]) {
   printf("There we go...\n");
   printf("Free memory: %lld\n", getTotalSystemMemory());
   printf("That's all folks!\n");
   return 0;
}
