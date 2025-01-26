// WAP to copy a string into another empty string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], strCopy[100], i=0;
    printf("Enter any string: ");
    gets(str);
    while (str[i] != '\0')  
    {
	   strCopy[i] = str[i];
       i++;
    }
    strCopy[i] = '\0'; // never forgot to set null terminated character at the end of string
    printf("\nString 1 = %s", str);
    printf("\nString 2 = %s", strCopy);
    return 0;
}