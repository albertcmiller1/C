#include <stdio.h>
 
int main () {

// why did we need a pointer here?
   char* names[] = {
      "Zara Ali" // ['Z', 'a', ..], -> char* -> 'Z' | ptr+1 = 'a'
      "Hina Ali",
      "Nuha Ali",
      "Sara Ali"
   };

   //names[1] -> *(names + 1)
   

   for (int i=0; i<4; i++) {
      // the %s will print out the fill string 
      // /n /0
      printf("Value of names[%d] = %s\n", i, names[i]);
      printf("Value of names[%d] = %s\n", i, *(names+i));
   }
   
   return 0;
}

