#include <stdio.h>
#include <string.h>

// define simple structure/
struct {
   unsigned int widthValidated;
   unsigned int heightValidated;
} status1;

// define a structure with bit fields 

struct {
   unsigned int widthValidated : 1; //the num at the end is specifying how many bits this member is using 
   unsigned int heightValidated : 1;
} status2;

struct {
   unsigned int widthValidated : 8;
   unsigned int heightValidated : 8;
   unsigned int pooValidated : 8;
   unsigned int dooValidated : 8;

   unsigned int fooValidated : 1;
} status3;


int main() {
   printf( "# of bytes used by status1: %d\n", sizeof(status1));
   printf( "# of bytes used by status2: %d\n", sizeof(status2));
   printf( "# of bytes used by status2: %d\n", sizeof(status3));
   printf( "# of bytes used by int: %d\n", sizeof(int));
   return 0;
}


