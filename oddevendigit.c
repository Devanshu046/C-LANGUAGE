#include<stdio.h>
int main()
{
    int n,a=0,reminder,b=0,c=0;

    printf("enter number=");
    scanf("%d",&n);

    while(n!=0)
    {
        reminder=n%10; //325%10=5       //32%10=2     // 3%10=3

        n=n/10;         //325/10=32     //32/10=3     //3/10=0

        c+=reminder;   //0+5=5          //5+2=7       //7+3=10

        if(reminder%2==0)  //5%2=1      // 2%2=0       //3%2=1
        {
            a+=reminder;    //0+5=5                     //5+3=8
        }
        else if(reminder%2!=0) //5%2=1
        {
            b+=reminder;                  //0+2=2                       
        }
    }

    printf("sum of all digit=%d\n",c);

    printf("even number sum=%d\n",a);    //2

    printf("odd number sum =%d",b);    //8
}