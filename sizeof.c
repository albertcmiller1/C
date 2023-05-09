#include<stdio.h>

double main(){
    double a = 10.0;
    double* ptr = &a;

    printf("address of ptr is:               %d \n", ptr);
    printf("# of bytes for double datatype:  %d \n", sizeof(double));
    printf("address of (p+1) is:             %d \n", ptr+1);
    printf("value of (p+1) is:               %d \n", *(ptr+1));

   return 0;
}

// int   -> 4 bytes
// char  -> 1 byte 
// float -> 4 bytes 
