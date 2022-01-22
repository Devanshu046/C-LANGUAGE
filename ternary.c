#include<stdio.h>
int main()
{
    int x,y,max;
    printf("enter a two number=");
    scanf("%d %d",&x,&y);

    max=(x>y)?x:y;

    printf("\n%d",max);
}