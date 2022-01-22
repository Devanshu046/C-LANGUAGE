#include<stdio.h>
#include<conio.h>
int main()
{
  int l,j,n,flag=0;

  printf("enter the number:\n");
  scanf("%d",&l);

  for ( j = 2; j <= l; j++)
  {
      if((n % j) == 0){
          flag = 1;
       break;

      }
  }
  if(flag ==0)
    printf("prime\n");
    else
    {
        printf("composite\n");
    }
    
}