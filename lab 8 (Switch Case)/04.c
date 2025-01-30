/* Write a menu driven program using (switch-case) which has following options:
1) Factorial of a number.
2) Prime or not
3) Odd or even
4) Exit */ 

#include <stdio.h>
int main()
{
   int n,a,b,c,count=0,fact=1,i;
   printf("enter\n1 for factorial of a number \n2 for checking of prime or not \n3 for checking of even or odd number\n");
   scanf("%d",&n);
   switch(n)
   {
        case 1:
            printf("enter a number = ");
            scanf("%d",&a);
            for(i=1;i<=a;i++)
            {
                fact=fact*i;
            }
            printf("the factorial of %d is %d",a,fact);
            break;
        case 2:
        printf("enter a number =  ");
        scanf("%d",&b);
        for(i=1;i<=b;i++)
        {
            if(b%i==0)
            count++;
        }
        if(count==2)
            printf("%d is a prime number ",b);
        else 
            printf("%d is not a prime number",b);
        break;
    case 3:
        printf("enter a number = ");
        scanf("%d",&c);
        if(c%2==0)
            printf("%d is a even number ",c);
        else
            printf("%d is a odd number ",c);
        break;
    default:
        printf("Exit");
   }

    return 0;
}