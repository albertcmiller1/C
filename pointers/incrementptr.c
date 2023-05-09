#include <stdio.h>

const int MAX = 3;

int main () {

   int  arr[] = {10, 100, 200};
   int  *ptr = arr;

   for (int i = 0; i < MAX; i++) {
      printf("Address of arr[%d] = %d\n", i, ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr );
      printf("\n");
      
      ptr++; // push the memory location on cell forward (aka next position in array) 
   }
 

   printf("\n");
   printf("\n");
   printf("the int type is 32 bit. 32/8=4 memoroy cells used.\n");
   return 0;
}
