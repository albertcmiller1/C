#include <stdio.h>
int main( ) {

   char str[100];

   printf( "Enter a value: ");
   scanf("%s", str);
   // The int scanf(const char *format, ...) function reads the input from the standard input stream stdin
   // and scans that input according to the format provided.


   printf("\nYou entered: %s\n", str);
   // The int printf(const char *format, ...) function writes the output to the standard output stream stdout 
   // and produces the output according to the format provided.

   return 0;
}
