#include<stdio.h>
struct date
{
    int dd,mm,yy;
};
struct student
{
  int rollNo,sem;
  struct date dob;
  char name[50];
};
int main()
{
    struct student p[20];
    int i;
    
    for(i=0;i<3;i++)
    {
    printf("enter name=");
    scanf("%s",&p[i].name);
    printf("enter roll No=");
    scanf("%d",&p[i].rollNo);
    printf("enter semester=");
    scanf("%d",&p[i].sem);
    printf("enter day:");
    scanf("%d",&p[i].dob.dd);
    printf("enter month:");
    scanf("%d",&p[i].dob.mm);
    printf("enter year:");
    scanf("%d",&p[i].dob.yy);
    }
      
    for(i=0;i<3;i++)  
    {
    printf("\nname=%s\nRoll no=%d\nsemester=%d\ndate of birth=\n%d-%d-%d",p[i].name,p[i].rollNo,p[i].sem,p[i].dob.dd,p[i].dob.mm,p[i].dob.yy);
    }
} 