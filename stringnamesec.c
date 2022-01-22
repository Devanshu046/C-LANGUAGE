#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],s3[60];

    printf("first name:");
    scanf("%s",&s1);

    printf("last name:");
    scanf("%s",&s2);
    
    strcat(s3,s1);
    strcat(s3,s2);

    printf("\n%s",s3);
}