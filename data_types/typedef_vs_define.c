#include <stdio.h>
 
#define TRUE  1
#define FALSE 0
 
int main( ) {
   printf( "Value of TRUE : %d\n", TRUE);
   printf( "Value of FALSE : %d\n", FALSE);

   return 0;
}

// #define is a C-directive which is also used to define the aliases for various data types
//
// typedef is limited to giving symbolic names to types only
//
// #define can be used to define alias for values as well
//
// typedef interpretation is performed by the compiler
//
// #define statements are processed by the pre-processor
