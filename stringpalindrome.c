#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    int result;

    printf("enter string:");
    scanf("%s",&s1);

    strcpy(s2,s1);

    strrev(s1);

    result=strcmp(s2,s1);
   
    if(result==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

}