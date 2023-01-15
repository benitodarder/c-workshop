#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned long long getTotalSystemMemory()
{
    long pages = sysconf(_SC_PHYS_PAGES);
    long page_size = sysconf(_SC_PAGE_SIZE);
    return pages * page_size;
}

int main(int argc, char *argv[]) {
   printf("There we go...\n");
   printf("Free memory: %lld\n", getTotalSystemMemory());
   printf("That's all folks!\n");
   return 0;
}
