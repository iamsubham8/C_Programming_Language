#include<stdio.h>
void printstr(char str[]);

int main()
{
// char str[]={'s','u','b','h','a','m','\0'};
char str[]="subham";
printstr(str);
return 0;
}
void printstr(char str[])
{
   int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}

