// Please refer to the complete code to check a given word is present in the string given by the user or not
#include <stdio.h>

int main()
{
    char base[20],test[20];
    int i=0,j=0,flag=0;
    printf("Enter base string:");
    gets(base);
    printf("Enter test string:");
    gets(test);
    int len2 = strlen(test);
    while(base[i]!='\0')
    {
        if(base[i]==test[j])
        {
            i++;j++;
        }
        if(((test[j]=='\0' && base[i]==' ') && base[i-len2-1] == ' ')||((test[j]=='\0' && base[i]==' ') && i-len2 == 0))
        {
            flag=1;
            break;
        }
        else if(((test[j]=='\0' && base[i]=='\0') && base[i-len2-1] == ' ')||((test[j]=='\0' && base[i]=='\0') && i-len2 == 0))
        {
            flag=1;break;
        }
        if(base[i]!=test[j])
        {
            i++;j=0;
        }
    }
    if(flag==1)     printf("%s is present in %s",test,base);
        else    printf("%s is not present in %s",test,base);
    return 0;
}