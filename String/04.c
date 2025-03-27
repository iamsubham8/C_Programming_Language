//Also try this with teir fullname

#include<stdio.h>
void printsring(char arr[]);

int main()
{
    char fullname[100];  
    printf("Enter your name");
    scanf("%s",fullname);
    printf("Your name is %s",fullname);
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