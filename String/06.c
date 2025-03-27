#include<stdio.h>
void printstr(char str[]);

int main()
{
char str[100];
printf("Enter the any string :");
gets(str);    //use for user input.....
puts(str);    //use for output print.....

printstr(str);
return 0;
}
void printstr(char str[])
{
   int i=0;
    printf("The sring is :");
    while(str[i]!='\0')
    {
       
        printf("%c",str[i]);
        i++;
    }
    
}

