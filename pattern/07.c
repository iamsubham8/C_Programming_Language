// Ques: How to solve the Number Pattern Using C Language ?
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5

#include<stdio.h>

int main(){
    for (int i = 1; i <=10; i++)
    {
        for (int  j = 1; j <=i; j++)
        {
            printf("%d ",i);
        }
    printf("\n");
    }
    
    return 0;
}