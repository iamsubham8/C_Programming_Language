#include<stdio.h>
void printsring(char arr[]);

int main()
{
    char firstname[] ="Subham";   //'s','u','b','h','a','m','\0';
    char lastname[]="Kewat";

    printsring(firstname);
    printsring(lastname);
    return 0;

    }   

    void printsring(char arr [])
    {
        for (int i = 0; arr[i] !='\0'; i++)
        {
            printf("%c",arr[i]);
        }
        
 
    printf("\n");
    }