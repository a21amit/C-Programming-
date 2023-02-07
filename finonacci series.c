#include<stdio.h>
int main()
{
        //fiboo
        int t1,t2,next,n,i;
        printf("Enter no. of terms :");
        scanf("%d",&n);
        t1=0;
        t2=1;
        next=t1+t2;
        if(n==1)
                printf("%d",t1);
        else if(n==2)
                printf("%d %d",t1,t2);
        else
        {
                printf("%d %d",t1,t2);
                for(i=3;i<=n;i++)
                {
                        printf("%d",next);
                        t1=t2;
                        t2=next;
                        next=t1+t2;

                }
        }
}
