#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int * getRandom( ) {

   static int r[10];
   
   srand( (unsigned)time( NULL ) ); //use the current time to set the seed (srand) so rand() and generate random numbers 
	
   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      printf("%d\n", r[i]);
   }
 
   return r;
}
 
int main () {

   int* p = getRandom();
	
   for (int i = 0; i < 10; i++) {
      printf("*(p + [%d]) : %d\n", i, *(p + i) );
   }
 
   return 0;
}

//this shit doesnt work lol idk why


// it is not a good idea to return the address of a local variable outside the function, so you would have to define the local variable as static variable.

