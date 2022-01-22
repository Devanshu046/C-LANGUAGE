#include<stdio.h>
int main()
{
    int t,n,p,a,b,c,e,f,g,h;
    printf("enter the value=");
    scanf("%d",&n);//7600
    
    t=n/2000;//3
    printf("\n2000 notes=%d",t);
    
    p=n-(t*2000);//1600
    a=p/500;//3
    printf("\n500 notes=%d",a);

    b=(n-((t*2000)+(a*500)));//7600-(6000)+(1500)=100
    c=b/100;
    printf("\n100 notes=%d",b/100);
    
    e=(n-((t*2000)+(a*500)+(c*100)));//7650-(6000)+(1500)+(100)=50
    f=e/50;//1
    printf("\n50 notes=%d",f);

    g=(n-((t*2000)+(a*500)+(c*100)+(f*50)));//7670-(6000)+(1500)+(100)+(50)=20
    h=g/20;//1
    printf("\n20 notes=%d",h);
}