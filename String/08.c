#include<stdio.h>
char* fun()
{
    char str[]="Hello";
    return str;
}
int main()
{
 char *ptr=fun();
 printf("String is %s",ptr);
return 0;
}