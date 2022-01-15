#include <stdio.h>
int test();
int* ptr;

int main () {
   int  *ptr = NULL;

   printf("The value of ptr is : %p\n", ptr);
   test();
   return 0;
}


int test(){
	if(ptr){
		printf("the pointer exists!");
	}
	if(!ptr){
	       printf("the pointer is null");
	}	       
	return 0;
}

