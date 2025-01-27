// Write a C program that takes two numbers as an input and print the average them. 
#include <stdio.h>
int main()
{
   float a,b,c;
   printf("enter the value  of a : ");
   scanf("%f",&a);
   printf("enter the value  of b : ");
   scanf("%f",&b);
   c=a/b;
   printf("avg %f,%f is %f",a,b,c);
    return 0;
}