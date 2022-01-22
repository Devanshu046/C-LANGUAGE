#include<stdio.h>
int main()
{
    char name[50];
    char *s1;
    s1=&name[0];
    printf("enter name=");
    scanf("%s",&name);

    while(*s1!='\0')
    {
        printf("%c\n",*s1);
        s1++;
    }
}