#include<stdio.h>
#include<string.h>
int main()
{
    char name [50],i;
    int length;

    printf("enter name:\n");
    scanf("%s",&name);

    length=strlen(name);
   
    // printf("%c\n",name[0]);
    // printf("%c\n",name[1]);
    // printf("%c\n",name[2]);

    for (i = 0; i < length; i++)
    {
        printf("%c\n",name[i]);
    }
    
    
}