#include<stdio.h>
int factorial(int a);
//int recursion(int a);
int main()
{
    int a,n;
    printf("enter no=");
    scanf("%d",&a);
    n=factorial(a);
    printf("%d",n);
}
int factorial(int a)
{
    int ans;
    if(a==1)
    {
        return 1;
    }
    ans=a*factorial(a-1);
    return ans;
    
}
// int recursion(int a)
// {
//     int n,i;
//     // for(i=1;i<=a;i++)
//     // {
//     //     n*=i;
//     // }
//     while(a!=1)
//     {
//         n=a*recursion(a-1);
//         a--;
//     }
   
//     return n;
// }