#include<stdio.h>
int main()
{
        int i,j;
        for(i=1; i<=4;i++)
        {
                 for(j=1;j<=7;j++)
                 {
                         if(j>(4-i)&&j<(4+i))
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
*/
