#include<stdio.h>
int main()
{
    int a,b,c,max,max1;
    printf("enter three number=");
    scanf("%d %d %d",&a,&b,&c);

    /*max=(a>b)?a:b;

    max1=(max>c)?max:c;*/
    max=(a>b && a>c)?a:(b>a && b>c)?b:c;

    printf("\n%d",max);
}