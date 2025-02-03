// 9. WAP to determine if a given number is prime or not

#include <stdio.h>
int checkprime(int n);
int main()
{
int n;
printf("Enter The Number = ");
scanf("%d", &n);
checkprime(n);
}

int checkprime(int n)
{
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        count++;
    }
    
if(count==2)
{
printf("It is prime\n");
}
else
{
printf("It is Not prime\n");
}
}