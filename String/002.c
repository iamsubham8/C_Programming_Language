#include<stdio.h>
void printsring(char arr[]);

int main()
{
    char name[50];  
    printf("Enter your name");
   gets(name);
    printf("Your name is %s",name);
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