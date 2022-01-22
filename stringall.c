#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int i,length,a=0,b=0,u=0,c=0,e=0,f=0;
    printf("input:");
    gets(s1);
    length=strlen(s1);
    for(i=0;i<length;i++)
    {
        if(s1[i]>=65 && s1[i]<=90) 
        {
            a++;
           switch(s1[i])
           { 
             case 'A':
             case 'I':
             case 'U':
             case 'E':
             case 'O':
             e++;
             break;
             default:
             f++;
           }
        }
        else if (s1[i]>=97 && s1[i]<=122)
        {
            u++;
            switch(s1[i])
            {
             case 'a':
             case 'i':
             case 'u':
             case 'e':
             case 'o':
             e++;
             break;
             default:
             f++;
             }
        }
        else if(s1[i]>=48 && s1[i]<=57)
        {
            b++;
        }
        else
        {
            c++;
        }
    }   
    printf("alphabet=%d",a+u); 
    printf("\nlowercase=%d",u);
    printf("\nuppercase=%d",a);
    printf("\nvowel=%d",e);
    printf("\nconsonant=%d",f);
    printf("\ndigit=%d",b);
    printf("\nother=%d",c);
}
 