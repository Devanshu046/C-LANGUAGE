#include<stdio.h>
void triangle(int a,int b,int *y,int *x);
int main()
{
    int l,b,area,perimeter;

    printf("enter length=");
    scanf("%d",&l);

    printf("enter breadth=");
    scanf("%d",&b);

   
    triangle(l,b,&area,&perimeter);
    printf("area=%d\nperimeter=%d",area,perimeter);
    printf("\n%d\n%d",l,b);
}
void triangle(int a,int b,int *x,int *y)
{
    *x=a * b;
    *y=2*(a + b);
}