
#include <stdio.h>
#include "freemem.h"

int main(int argc, char *argv[]) {
   unsigned long long freemem;
   
   printf("There we go...\n");
   freemem =  getTotalSystemMemory();
   printf("Free memory in bytes: %lld\n", freemem);
   printf("Free memory in kilobytes: %lld\n", freemem / 1024);
   printf("Free memory in megabytes: %lld\n", freemem / 1048576);
   printf("Free memory in gigabytes: %f\n", (float)(freemem / 1073741824));
   printf("That's all folks!\n");
   return 0;
}
