#include<stdio.h>
int main()
{
    int n,reminder,a=0;

    printf("enter number=");
    scanf("%d",&n);

    while(n!=0)
    {
        reminder=n%10;   //128%10=8    //12%10=2     //1%10=1
        n=n/10;         //128/10=12     //12/10=1    //1/10=0

        a+=reminder;    //a=0+8=8    //a=8+2=10     //a=10+1=11
        

        
    }

    printf("sum=%d",a);
}