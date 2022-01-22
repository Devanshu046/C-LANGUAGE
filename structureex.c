#include<stdio.h>
struct distance
{
    int feet;
    float inch;
};
int main()
{
     struct distance dis1;
     printf("enter feet=");
     scanf("%d",&dis1.feet);

     printf("enter inch=");
     scanf("%f",&dis1.inch);

     printf("feet=%d\ninch=%f",dis1.feet,dis1.inch);
}