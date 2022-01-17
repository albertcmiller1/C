#include <stdio.h>
#include <time.h>
 
void getSeconds(unsigned long *par);

int main () {

   unsigned long sec;  // define a variable 
   getSeconds( &sec ); // pass the address of that variable to getSeconds() function 

   printf("Number of seconds: %ld\n", sec );

   return 0;
}

void getSeconds(unsigned long *param) {
   *param = time( NULL ); // set the value of the pointer that was passed to us to the current time 
   return;
}
