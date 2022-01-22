#include<stdio.h>
#include<string.h>
int main()
{
    char pass1[50],pass2[50];
    int result;

    printf("enter password:");
    scanf("%s",&pass1);

    printf("enter confirm password:");
    scanf("%s",&pass2);

    result=strcmp(pass1,pass2);

    printf("\n%d\n",result);

    if(result==0)
    {
        printf("pass1=pass2");
    }
    else if(result<0)
    {
        printf("pass2>pass1");
    }
    else
    {
        printf("pass1>pass2");
    }
}