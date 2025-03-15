//7. WAP to find length of a given string.

#include <stdio.h>
#include<string.h>
int main()
{
    char str[100]; /* Declares a string of size 100 */

	     
     printf("Input the string : ");
     gets(str);
     printf("Length of the string is : %d\n\n", strlen(str));
}