#include <stdio.h>

const int MAX = 3;

int main () {

   int  arr[] = {10, 100, 200};
   int  i, *ptr;

   /* let us have address of the first element in pointer */
   ptr = arr;
   i = 0;


   // only increment if the ptr value is less than or equal to the currenet ptr value   
   while ( ptr <= &arr[MAX - 1] ) {

      printf("Address of arr[%d] = %d\n", i, ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr );

      /* point to the next location */
      ptr++;
      i++;
   }
	
   return 0;
}
