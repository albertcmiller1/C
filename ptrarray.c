#include <stdio.h>
 
const int MAX = 3;
 
int main () {

   int arr[] = {10, 100, 200};
   int* ptr[MAX];
 
   for (int i = 0; i < MAX; i++) {
      ptr[i] = &arr[i]; // assign the address of integer. 
   }
   
   for (int i = 0; i < MAX; i++) {
      printf("Value of arr[%d] = %d\n", i, *ptr[i] );
   }
   
   return 0;
}
