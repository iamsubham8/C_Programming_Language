#include<stdio.h>
int main()
{
char str[100];
int i=0;
printf("enter the sring :");
gets(str);
char *ptr=str;

while(*(ptr+i)!='\0')
{
    i++;
}
printf("the length of string %s is %d",str,i);

return 0;
}