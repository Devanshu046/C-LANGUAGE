#include<stdio.h>
#include<string.h>
int main()
{
    char name[50],i,a=0;
    int length;

    printf("enter string:");
    scanf("%s",&name);

    length=strlen(name);

    for (i = 0; i < length; i++)
    {
    //    if((name[i]=='a'||name[i]=='A')||(name[i]=='i'||name[i]=='I')||(name[i]=='u'||name[i]=='U')||(name[i]=='e'||name[i]=='E')||(name[i]=='o'||name[i]=='O'))
    //    {
    //        a++;
    //    }
         switch(name[i])
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
             a++;

         }
    }
    printf("vowel=%d",a);

    
}