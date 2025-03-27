//Ask the user to enter their firstname & print it back to them .

#include<stdio.h>
void printsring(char arr[]);

int main()
{
    char firstname[50];  
    printf("Enter your name");
    scanf("%s",firstname);
    printf("Your name is %s",firstname);
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