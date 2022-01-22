#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50],s3[50];

    printf("enter string:");
    scanf("%s",&s1);

    strcpy(s2,s1);

    printf("%s\n",s1);
    printf("%s\n",s2);

    strcpy(s3,"bhavan");
    printf("%s\n",s3);

    strcat(s3," trivedi");
    printf("%s\n",s3);

    strrev(s1);
    printf("%s",s1);
}