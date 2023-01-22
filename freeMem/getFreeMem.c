
#include <stdio.h>
#include "freemem.h"

int main(int argc, char *argv[]) {
   unsigned long long freemem;
   
   printf("There we go...\n");
   freemem =  getTotalSystemMemory();
   printf("Conversions applied following 1998 convention 1Kb = 10^3b\n");
   printf("Free memory in bytes: %lld\n", freemem);
   printf("Free memory in kilobytes: %lld\n", freemem / 1000);
   printf("Free memory in megabytes: %lld\n", freemem / 1000000);
   printf("Free memory in gigabytes: %f\n", (float)(freemem / 1000000000));
   printf("That's all folks!\n");
   return 0;
}
