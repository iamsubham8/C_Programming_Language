#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("enter the number :");
    scanf("%d",&num);
    temp=num;

    while (temp>0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp = temp/10;
    }
    
    if (sum==num)
    {
        printf("The Armstrong Number");
    }
    else
      {
        printf("The Not Armstrong Number");
      }
    
return 0;

}