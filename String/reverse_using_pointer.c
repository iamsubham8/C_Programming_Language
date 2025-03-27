
#include <stdio.h>
#include<string.h>
char* reverse(char *str)
{
    int len, i;
    char ch;
    len = strlen(str);
    for(i=0;i<len/2;i++)
    {
        ch = str[i];
        str[i] = str[len - i - 1];
        str[len - i -1] = ch;
    }
    return str;
}
int main()
{
    char str[100];
    gets(str);
    char *p = reverse(str);
    printf("The reverse of string is %s",p);
    return 0;
}