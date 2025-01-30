/*Write a menu driven program using (switch-case) which has following options:
1) Area of a Circle.
2) Perimeter of a Circle
3) Area of a Square
4) Perimeter of a Square
5) Area of a tringle
6) Perimeter of a triangle
*/

#include <stdio.h>
int main()
{
    float r,s,b,h;
    int n;
    printf("enter \n1 for area of circle \n2 for periemeter of circle \n3 for area of square \n4 for perimeter of square \n5 for area of triangle \n6 for perimeter of triangle\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("enter a redius of circle = ");
            scanf("%f",&r);
            printf("the area of circle is = %f",3.14*r*r);
            break;
        case 2:
            printf("enter a perimeter of circle = ");
            scanf("%f",&r);
            printf("the perimeter of circle is = %f",2*3.14*r);
            break;
        case 3:
            printf("enter side of square = ");
            scanf("%f",&s);
            printf("the area of square = %f ",s*s);
            break;
        case 4:
            printf("enter side of square = ");
            scanf("%f",&s);
            printf("the perimeter of square = %f ",4*s);
            break;
        case 5:
            printf("enter a base of triangle = ");
            scanf("%f",&b);
            printf("enter a height of triangle = ");
            scanf("%f",&h);
            printf("the area of triangle is = %f ",0.5*b*h);
            break; 
        case 6:
            printf("enter a side of triangle = ");
            scanf("%f",&s);
            printf("enter a base of triangle = ");
            scanf("%f",&h);
            printf("enter a height of triangle = ");
            scanf("%f",&h);
            printf("the perimeter of triangle is = %f ",s+b+h);
            break;   
        default:
            printf("exist");
    }

    return 0;
}