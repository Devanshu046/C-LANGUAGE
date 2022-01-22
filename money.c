#include<stdio.h>
int main()
{
    float amount;
    int rupees,paise;

    printf("enter the number=");
    scanf("%f",&amount);
    rupees=(int)amount;
    
    printf("ruppes=%d",rupees);
    
    paise=(int)((amount-rupees)*100);

    printf("\npaise=%d",paise);




}