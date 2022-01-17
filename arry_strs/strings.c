#include <stdio.h>

int main () {
   //strings are just arrays in C
   
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   printf("Greeting message: %s\n", greeting );


   char str[20] = "Im a cool string";
   printf("str: %s\n", str);

   return 0;
}
