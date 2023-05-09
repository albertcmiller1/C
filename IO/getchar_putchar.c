#include <stdio.h>
int main( ) {

   int c;

   printf( "Enter a value :");
   c = getchar( ); 
   // getchar() reads the next available character from the screen and returns it as an integer
   // this function reads only single character at a time
   // you can use this method in the loop in case you want to read more than one character from the screen


   printf( "\nYou entered: ");
   putchar( c );
   // putchar() puts the passed character on the screen and returns the same character
   // this function reads only single character at a time
   // you can use this method in the loop in case you want to read more than one character from the screen

   return 0;
}
