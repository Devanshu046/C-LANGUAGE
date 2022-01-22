#include<stdio.h>
int vowel(char a[]);
int main()
{
    char a[50];
    int n;

    printf("enter string=");
    scanf("%s",&a);
    n=vowel(a);
    printf("vowel=%d",n);
}
int vowel(char a[])
{
    int length,b=0,i;
    while(*a!='\0')
    {
         switch(*a)
         {
             case 'a':
             case 'A':
             case 'i':
             case 'I':
             case 'u':
             case 'U':
             case 'e':
             case 'E':
             case 'o':
             case 'O':
             b++;
          }
          a++;
      }
    return b;
}