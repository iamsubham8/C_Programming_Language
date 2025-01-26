#include <stdio.h>
int main()
{ 
    int marks[4];
    
for (int i = 0; i < 4; i++)
{
    printf("Enter the value of %d is element of the arry is\n",i);
    scanf("%d",marks[i]);
}
for (int i = 0; i < 4; i++)
{
    printf("The value of %d is element of the arry is\n",i,marks[i]);

}



//    marks[0]=85;
//     printf("Marks of student 1 is %d\n",marks[0]);
//     marks[1]=79;
//     marks[2]=44;
//     marks[5]=56;
//     printf("Marks of student 4 is %d\n",marks[5]);
  
    

 return 0; 
}