#include <stdio.h>
#include <string.h>

int main(){

    char str1[10] = "albert";
    char str2[10] = "miller";


    // returns 0 if strs are same
    // less than 0 if str1<str2
    // greater than 0 if str1>str2
    printf("value returned from strcmp: %d\n", strcmp(str1,str2));


    // returns a pointer to the first occurence of character 'er' in str1
    printf("value returned from strchr(): %s\n", strchr(str1, 'l'));
   

    //strstr() is the same as above but returns the first occurence of a sting instead of character  



    return 0;
}
