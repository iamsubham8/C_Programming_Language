//WAP to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];int len,temp;
printf("Enter the srting :");
gets(str);
len=strlen(str);
for (int i = 0; i <len/2; i++)
{
    temp=str[i];
    str[i]=str[len-1-i];
    str[len-1-i]=temp;

}
printf("The reverse sring is : %s",str);

return 0;
}
