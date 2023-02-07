#include<stdio.h>
int main()
{
        int i,j;
        for(i=1;i<=3;i++)
        {
                for(j=1;j<=8;j++)
                {
                        if(j>i&&j<(8-i))
                                printf("*");
                        else
                                printf(" ");
                }
                printf("\n");
        }
        return 0;
}
/*Output
   *
  ***
 *****
*******
 *****
  ***
   *
*/
