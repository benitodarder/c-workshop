
#include <stdio.h>
#include "freemem.h"

int main(int argc, char *argv[]) {
   unsigned long long freeMemInBytes;
   unsigned long freeMemInKb,
                  freeMemInMb;
   float freeMemInGb;
   
   printf("There we go...\n");
   freeMemInBytes =  getTotalSystemMemory();
   freeMemInKb = freeMemInBytes / 1000;
   freeMemInMb = freeMemInKb / 1000;
   freeMemInGb = (float) freeMemInMb / 1000;
   printf("Conversions applied following 1998 convention 1Kb = 10^3b\n");
   printf("Free memory in bytes: %lld\n", freeMemInBytes);
   printf("Free memory in kilobytes: %lu\n", freeMemInKb);
   printf("Free memory in megabytes: %lu\n", freeMemInMb);
   printf("Free memory in gigabytes: %.2f\n", freeMemInGb);
   printf("That's all folks!\n");
   return 0;
}
