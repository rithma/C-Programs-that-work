#include <stdio.h>
#include <stdlib.h>

/*
long int strtol(const char *str, char **endptr, int base) converts the 
initial part of the string in str to a long int value according to the 
given base, which must be between 2 and 36 inclusive, or be the special value 0.

Parameters

    str -- This is the string containing the representation of an integral number.

    endptr -- This is the reference to an object of type char*, whose value is set by the function to the next character in str after the numerical value.
              (says what came after the number!!!)

    base -- This is the base, which must be between 2 and 36 inclusive, or be the special value 0.

*/


int main(int argc, char * argv[])
{
	printf("<<< USAGE:enter some numbers and some words... >>>\n> ");
   char str[100];
   fgets(str, 99, stdin);
   char *ptr;
   long rc;

   rc = strtol(str, &ptr, 10);
   printf("The number(unsigned long) is %ld\n", rc);
   printf("Right After the number was:|%s| \n", ptr);

   return(0);
}
