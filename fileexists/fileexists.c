#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

void usage(int argc, char *argv[]);

int main(int argc, char *argv[]) {
   FILE *filePointer;
   
   if (argc != 2) {
      usage(argc, argv);
      exit(1);
   }
   printf("Looking for: %s\n", argv[1]);
   filePointer = fopen(argv[1], "r");
   if (filePointer != NULL) {
      printf("File exits...\n");
   } else {
      printf("File not found and error code is: %d\n", errno);
      perror("Error: ");
   }
   return 0;
}

void usage(int argc, char *argv[]) {
   printf("Usage:\n\t%s <File path and name>\n", argv[0]);
   printf("\tExpected 1 argument, you provided: %d\n", argc - 1);
}
