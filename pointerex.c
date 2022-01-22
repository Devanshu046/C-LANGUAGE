#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p;//p is pointer to integer
    p=&a;//p points to address to a
    printf("address of varable a=%u",&a);//address is always unsinged int
    printf("\nvalue of varable a=%d",a);
    printf("\np points to the address %u",p);
    printf("\nvalue on address p is %d",*p);

    *p=30;//value on address 
     printf("\nvalue of varable a=%d",a);
     printf("\nvalue on address p is %d",*p);
    
    p=&b;
    printf("\np points to the address %u",p);
    printf("\nvalue on address p is %d",*p);
    printf("\naddress of variable b is %u",&b);

    *p=45;
    printf("\nvalue of a=%d",a);
    printf("\nvalue of b=%d",b);
}