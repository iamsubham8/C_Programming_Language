// Q16. Write a program using pointers to determine the length of a character
// string.


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