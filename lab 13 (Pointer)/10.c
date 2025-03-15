// 10.  WAP to find length of a given string using pointer. 
#include<stdio.h>
int main()
{
char str[100];
int i=0;
printf("enter the sring :");
gets(str);
char *ptr=str;

while(*ptr!='\0')
	{
		i++;
		ptr++;
}
printf("the length if string %d",i);

return 0;
}