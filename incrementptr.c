#include <stdio.h>

const int MAX = 3;

int main () {

   int  arr[] = {10, 100, 200};
   int  i, *ptr;

   /* let us have array address in pointer */
   ptr = arr;
	
   for (i = 0; i < MAX; i++) {
      printf("Address of arr[%d] = %d\n", i, ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr );
      printf("\n");
      printf("\n");
      /* move to the next location */
      ptr++;
   }
 

   printf("\n");
   printf("\n");
   printf("the int type is 32 bit. 32/8=4 memoroy cells used.");
   return 0;
}
