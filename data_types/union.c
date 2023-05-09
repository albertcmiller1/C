#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};

// a union is a special data type that allows us to store different data types in the same memory location 
// the size of the union will be the larges type we difine in the union 
// we can define a union with many members, but only one member can contain a value at any given time.


int main( ) {
   union Data data;        
   printf( "Memory size occupied by data : %d\n", sizeof(data));
   return 0;
}
