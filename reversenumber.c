#include<stdio.h>
int main()
{
    int n,reminder,a=0;

    printf("enter number=");
    scanf("%d",&n);

    while(n!=0)
    {
        reminder=n%10; 
                
        a=a*10+reminder; 
        n=n/10;        
    }
    printf("reverse num=%d",a);
    
}