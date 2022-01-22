#include<stdio.h>
int main()
{
    int n=128,a;

   /* printf("enter number=");
    scanf("%d",&n);*/
    a=n%10;

    
    printf("last digit=%d\n",a);

    n=n/10; //128/10=12
    a=n%10;
    printf(" second last digit=%d\n",a);
    printf("digit=%d\n",n);

    n=n/10; //12/10=1
    a=n%10;

    printf(" first digit=%d\n",a);
    printf("digit=%d\n",n);

    n=n/10; //1/10=0
    a=n%10;

    printf("%d=\n",a);
    printf("%d=\n",n);
     /*
     else
     {
         printf("last digit=%d",n);
     }*/
     
}