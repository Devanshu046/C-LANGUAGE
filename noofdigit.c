#include<stdio.h>
int main(){
    int n,a=0;

    printf("enter number=");
    scanf("%d",&n);

     

    while(n!=0)    
    {
        
        n=n/10;     

        a++;                 
        
    }
    printf("digit=%d",a);
}