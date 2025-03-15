//7. WAP to find length of a given string.


#include <stdio.h>
int main()
{
    char str[100]; /* Declares a string of size 100 */
    int l= 0;
	     
       printf("Input the string : ");
       gets(str);
    while(str[l]!='\0')
    {
        l++;
    }
    printf("Length of the string is : %d\n\n", l);
}