#include <stdio.h>

int main () {
   FILE *fp;
   char str[60];

   // opening file for reading 
   fp = fopen("file.txt" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }

   // char *fgets(char *str, int n, FILE *stream) reads a line from the specified stream 
   // and stores it into the string pointed to by str.
   if( fgets (str, 60, fp)!=NULL ) {
      puts(str);
   }
   fclose(fp);
   
   return(0);
}
