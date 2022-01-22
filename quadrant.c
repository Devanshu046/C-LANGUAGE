#include<stdio.h>
int main()
{
    int a,b;
    printf("enter x and y value=");
    scanf("%d %d",&a,&b); //x=5 y=5
    

    if(a>0 && b>0 )
    {
        printf(" your point in I quadrant");
    }
    else if(a<0 && b>0 )
    {
        printf("your point in II quadrant");
    }
    else if(a<0 && b<0)
    {
        printf("your point in III qudrant");
    }
    else if(a>0 && b<0)
    {
        printf("your point in IV quadrant");
    }
    else
    {
        printf("origin");
    }
    
    
    

}