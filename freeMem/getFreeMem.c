
#include <stdio.h>
#include "freemem.h"

int main(int argc, char *argv[]) {
   unsigned long long freeMemInBytes;
   unsigned long freeMemInKb,
                  freeMemInKb1998,
                  freeMemInMb,
                  freeMemInMb1998;
   float freeMemInGb,
         freeMemInGb1998;
   
   printf("There we go...\n");
   freeMemInBytes =  getTotalSystemMemory();
   freeMemInKb = freeMemInBytes >> 10;
   freeMemInMb = freeMemInKb >> 10;
   freeMemInGb = (float) freeMemInMb / 1024;
   printf("Conversions applied following classic convention 1Kb = 2^10b\n");
   printf("Free memory in bytes: %lld\n", freeMemInBytes);
   printf("Free memory in kilobytes: %lu\n", freeMemInKb);
   printf("Free memory in megabytes: %lu\n", freeMemInMb);
   printf("Free memory in gigabytes: %.2f\n", freeMemInGb);   
   freeMemInKb1998 = freeMemInBytes / 1000;
   freeMemInMb1998 = freeMemInKb1998 / 1000;
   freeMemInGb1998 = (float) freeMemInMb1998 / 1000;
   printf("Conversions applied following 1998 convention 1Kb = 10^3b\n");
   printf("Free memory in bytes: %lld\n", freeMemInBytes);
   printf("Free memory in kilobytes: %lu\n", freeMemInKb1998);
   printf("Free memory in megabytes: %lu\n", freeMemInMb1998);
   printf("Free memory in gigabytes: %.2f\n", freeMemInGb1998);
   printf("That's all folks!\n");
   return 0;
}
