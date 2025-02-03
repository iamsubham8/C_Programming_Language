/* Write a Menu Driven program to find addition, subtraction, multiplication and division all
 using one user defined function for each operation */
#include<stdio.h>
int add(int x,int y);
int sub(int x,int y);
int multiply(int x,int y);
int division(int x,int y);
	
int main()
{
int a,b,choice;
scanf("%d%d%d",&a,&b,&choice);

switch(choice)
{
case 1:
printf("%d",add(a,b));
break;

case 2:
printf("%d",sub(a,b));
break;

case 3:
printf("%d",multiply(a,b));
break;

case 4:
printf("%d",division(a,b));
break;
}
return 0;
}

int add(int x,int y)
{
return x+y;
}
int sub(int x,int y)
{
return x-y;
}
int multiply(int x,int y)
{
return x*y;
}
int division(int x,int y)
{
return x/y;
}

