#include<stdio.h>
void address();
int add(int,int);

int main()
{
    int sum;
    printf("company name is:\n");
    address();
    printf("addition->");
    sum=add(25,30);
    printf("25 + 30 =%d",sum);
}
void address()
{
    printf("dev\n");
}
int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
