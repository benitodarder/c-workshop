#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "extLib.h"

void usage(int argc, char *argv[]);

int main(int argc, char *argv[]) {
   FILE *filePointer;
   char *converted;
   
   if (argc != 2) {
      usage(argc, argv);
      exit(1);
   }
   printf("Converting to uppercaser:\n\t%s\n", argv[1]);
   converted = toUppercase(argv[1]);
   printf("Converted:\n\t%s\n", converted);
   free(converted);
   return 0;
}

void usage(int argc, char *argv[]) {
   printf("Usage:\n\t%s <String to convert>\n", argv[0]);
   printf("\tExpected 1 argument, you provided: %d\n", argc - 1);
}
