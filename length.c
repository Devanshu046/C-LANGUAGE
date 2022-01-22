#include<stdio.h>
int main()
{
    int length;
    char *name;
    name="DELHI";
    char *cptr=name;
    printf("%s\n",name);
    while(*cptr!='\0')
    {
        printf("%c is stored at %u\n",*cptr,cptr);
        cptr++;
        printf("%u - %d\n",name,cptr);
    }

    length=cptr-name;
    printf("\nlength=%d\n",length);

}