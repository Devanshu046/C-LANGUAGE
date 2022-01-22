#include<stdio.h>
struct date
{
    int dd,mm,yy;
};
int main()
{
    struct date p1;
    char name[50];
    printf("enter name=");
    scanf("%s",&name);
    printf("enter day:");
    scanf("%d",&p1.dd);
    printf("enter month:");
    scanf("%d",&p1.mm);
    printf("enter year:");
    scanf("%d",&p1.yy);

    printf("name=%s\n",name);
    printf("date=%d-%d-%d",p1.dd,p1.mm,p1.yy);
}
