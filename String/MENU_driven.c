/*Using programs 5 to 8 now write a menu-driven program which copies a string, 
concatenates a string, to finds length of a given string, to compares two strings.*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20];
    int ch,i,j;
    
    
         printf("\tMENU");
         printf("\npress 5 for copy sring\npress 6 for concotenate\npress 7 for lenght srings\npress 8 for compare two srings\n");
         printf("\nEnter your choice: ");
         scanf("%d",&ch);
        switch(ch)
        {
             case 5:
                printf("Enter a String1: ");
                scanf("%s",str1);
                printf("Enter a String2: ");
                scanf("%s",str2);
                printf("\nString Before Copied:\nString1=\"%s\",String2=\"%s\"\n",str1,str2);
                strcpy(str2,str1);
                printf("-----------------------------------------------\n");
                printf("\"We are copying string String1 to String2\" \n");
                printf("-----------------------------------------------\n");
                printf("String After Copied:\nString1=\"%s\", String2=\"%s\"\n\n",str1,str2);
            break;
            
            case 6:
                printf("\nEnter First String: ");
                scanf("%s",str1);
                printf("Enter Second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("String After Concatenation : %s\n",str1);
                break;
            case 7:
                printf("Enter String: ");
                scanf("%s",str1);
                i=strlen(str1);
                printf("Length of String : %d\n\n",i);
            break;
           
            case 8:
                printf("Enter First String: ");
                scanf("%s",str1);
                printf("Enter Second String: ");
                scanf("%s",str2);
                j=strcmp(str1,str2);
                if(j==0)
                {
                    printf("Strings are Same\n\n");
                }
                else
                {
                    printf("Strings are Not Same\n\n");
                }
            break;
    
            default:
                printf("Invalid Input. Please Enter valid Input.\n\n ");
        }
 
    return 0;
}

