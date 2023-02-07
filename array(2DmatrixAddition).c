#include<stdio.h>
int main()
{
        int a[20][20],b[20][20],c[20][20],i,j,row,col;
        printf("Enter row and col of matrix:");
        scanf("%d%d",&row,&col);
        printf("Enter element matrix I: ");
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=col;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("Enter element matrix II: ");
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=col;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=col;j++)
                {
                        c[i][j]=0;
                        c[i][j]+=a[i][j]+b[i][j];
                }
        }
        printf("Sum is :");
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=col;j++)
                {
                        printf(" %d",c[i][j]);
                }
                printf("\n");
        }
}
