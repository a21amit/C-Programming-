#include<stdio.h>
int main()
{
        int a[20][20],b[20][20],i,j,row,col;
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
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=col;j++)
                {
                        b[i][j]=a[j][i];
                }


        }
        printf("Result is :");
        for(i=1;i<=row;i++)
        {
                for(j=1;j<=col;j++)
                {
                        printf(" %d",b[i][j]);
                }
                printf("\n");
        }
}
