#include <stdio.h>
#include <string.h>

struct {
   unsigned int age : 3;
} Age;

int main( ) {

   // binary of 4: 100`
   Age.age = 4;
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   // binary of 7: 111
   Age.age = 7;
   printf( "Age.age : %d\n", Age.age );

   // binary of 8: 1000
   Age.age = 8;
   printf( "Age.age : %d\n", Age.age );

   return 0;
}
