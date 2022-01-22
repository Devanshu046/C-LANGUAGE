#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,max,max1,max2,max3,max4,max5;
    printf("no one=");
    scanf("%d",&a);
    printf("no two=");
    scanf("%d",&b);
    printf("no third=");
    scanf("%d",&c);
    printf("no forth=");
    scanf("%d",&d);
    printf("no five=");
    scanf("%d",&e);
    printf("no six=");
    scanf("%d",&f);
    printf("no seven=");
    scanf("%d",&g);

    max=(a>b)?a:b;
    max1=(max>c)?max:c;
    max2=(max1>d)?max1:d;
    max3=(max2>e)?max2:e;
    max4=(max3>e)?max3:f;
    max5=(max4>g)?max4:g;

    printf("maximum=%d",max5);
    
}