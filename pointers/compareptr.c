#include <stdio.h>

const int MAX = 3;

int main () {

   int  arr[] = {10, 100, 200};
   int* ptr = arr;
   int i = 0;

   // only increment if the ptr value is less than or equal to the currenet ptr value   
   while (ptr <= &arr[MAX - 1] ) {

      printf("Address of arr[%d] = %d\n", i, ptr );
      printf("Value of arr[%d] = %d\n", i, *ptr );

      ptr++;
      i++;
   }
	
   return 0;
}
