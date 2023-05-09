#include <stdio.h>

int main () {
	int age = 25;
	int *age_ptr;

	age_ptr = &age;

	printf("age variable:             %d\n", age);
	printf("address of age variable:  %p\n", &age);
	printf("value of age_ptr:         %p\n", age_ptr);
	printf("value of *age_ptr:        %d\n", *age_ptr);
	return 0;
}


