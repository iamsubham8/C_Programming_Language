//Write a C program that will read a line and delete from it all occurrences of the word ‘the’.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int len= strlen(str);
    int i;
    for(i=0;i<len;i++)
    {
        if((i==0 || str[i-1]==' ')&&str[i]=='t' && str[i+1]=='h' && str[i+2]=='e' && (str[i+3]==' '|| str[i+3]=='\0') )
            i=i+3;
        printf("%c",str[i]);
    }
    printf("\n");
}