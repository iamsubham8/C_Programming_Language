#include<stdio.h>
//void printAddress(int n);
void printAddress(int *n);

int main ()
{ 
   int n = 4;
//    printAddress(n);
//    printf("address of n is %u\n",&n);

   printAddress(&n);
   printf("address of n is %u\n",&n);
   return 0;
}
// //call by value
// void printAddress(int n)
// {
//     printf("address of n is %u\n",&n);
// }

//call by reference
void printAddress(int *n)
{
    printf("address of n is %u\n",n);
}
