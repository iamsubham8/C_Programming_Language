//Code to convert a string into an equivalent integer (e.g. "123" -> 123)
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,num=0,rem,len;
    gets(str);
    len = strlen(str);
    for(i=0;i<=len-1;i++)
    {
        rem = str[i];
        rem -= 48;
        num = num*10 + rem;
    }
    printf("The integer number corresponding to %s is %d",str,num);
}