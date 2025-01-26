#include<stdio.h>
int main()
{
    int size1,size2;
    printf("Enter the bounds of matrix :");
    scanf("%d%d",&size1,&size2);

    int a[size1][size2],i,j;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            scanf("%d",&a[i][j]);
        }    
    }
printf("Entered the matrix is :");
for (int i = 0; i < size1; i++)
{
    for (int j = 0; j < size2; i++)
    {
        printf("%d",a[i][j]);
        printf("\n");

    }
    
}

return 0;
}

    