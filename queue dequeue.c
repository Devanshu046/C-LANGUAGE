#include <stdio.h>
    int main()
    {
        int i,a[30],n,r,f;
        f=-1;
        printf("enter size:");
        scanf("%d",&n);
        for(r=0;r<n;r++)
        {
            if(r==n)
            {
                printf("overflow\n");
                break;
            }
            else
            {
                printf("enter value\n");
                scanf("%d",&a[r]);
            }
        }
        printf("\nr=%d",r);
        f=0;
        if(f<0)
        {
            printf("underflow");
        }
        else
        {
            for(f=0;f<=n;f++)
            {
                if(f==r)
                {
                    printf("\nempty");
                    break;
                }
                else
                {
                    printf("\ndeleted=%d",a[f]);
                }
            }
        }
    }