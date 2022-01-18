#include <stdio.h>
int main( ) {

   char str[100];

   printf("Enter a value :");
   gets( str ); // gets is depricated ..
   // char *gets(char *s) function reads a line from stdin into the buffer pointed to by s
   // reads until either a terminating newline or EOF (End of File).


   printf( "\nYou entered: ");
   puts( str );
   // the int puts(const char *s) function writes the string 's' and 'a' trailing newline to stdout.


   return 0;
}
