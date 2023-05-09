#include <stdio.h>
#include <string.h>

// typedef is used to give a type a new name
// by convention, uppercase letters are used for these definitions


int main (){

    typedef unsigned char BYTE;

    BYTE b1 = 'a';

    printf("value of b1: %c\n", b1);

    return 0;
}

