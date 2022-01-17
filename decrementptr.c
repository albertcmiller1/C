#include <stdio.h>

const int MAX = 3;

int main () {

   int  arr[] = {10, 100, 200};
   int* ptr = &arr[MAX-1];


   for (int i = MAX; i > 0; i--) {
      
      printf("Address of arr[%d] = %d\n", i-1, ptr );
      printf("Value of arr[%d] = %d\n", i-1, *ptr );

      ptr--;
   }
	
   return 0;
}
