#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int length;
    char add[20];

    name[0]='d';
    name[1]='e';
    name[2]='v';
    name[3]='\0';
    name[4]='a';

    printf("%c\n",name[0]);
    printf("%c\n",name[1]);
    printf("%c\n",name[2]);
    printf("%c\n",name[4]);

    printf("enter a name=");
    scanf("%s",&add);

    length=strlen(add);

    printf("name is:%s\n",add);
    printf("length is:%d",length);

}