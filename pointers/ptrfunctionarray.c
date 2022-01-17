#include <stdio.h>
 
/* function declaration */
double getAverage(int *arr, int size);
 
int main () {

   /* an int array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
 
   /* pass pointer to the array as an argument */
   avg = getAverage( balance, 5 ) ;
 
   /* output the returned value  */
   printf("Average value is: %f\n", avg );
   return 0;
}

double getAverage(int* arr, int size) {

   int  i, sum = 0;       
   double avg;          

   printf("BITCH, the value of arr[0] is: %d\n", arr[0]); 
   printf("BITCH, the value of *arr is: %d\n", *arr); 

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
 
   avg = (double)sum / size;
   return avg;
}
