#include <stdio.h>
 
int main () {

   int weight = 170;
   int* ptr = &weight;
   int** pptr = &ptr;;

   /* take the value using pptr */
   printf("Value of weight = %d @ address %d\n", weight, &weight );
   printf("Value of  *ptr  = %d @ address %d\n", *ptr, &ptr);
   printf("Value of **pptr = %d @ address %d\n", **pptr, &pptr);

   return 0;
}
