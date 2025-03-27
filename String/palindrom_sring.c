//Code to check string is palindrome or not 

#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int len, i,flag=0;
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
       if(str[i]!=str[len - i -1])
       {
           flag = 1;
           break;
       }
    }
    if ( flag == 1)
     printf("The %s is not palindrome",str);
    else
     printf("The %s is palindrome",str);
    return 0;
}