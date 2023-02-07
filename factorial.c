#include<stdio.h>
int main()

{
        //factorial
        int num, sto;
        printf("Enter num :");
        scanf("%d",&num);
        sto=num;
        while(num>0)
        {
                sto=sto*(num-1);
                printf("sto %d\n",sto);
                num=num-1;
                printf("num %d\n",num);
        }
        printf("resu %d",sto);
}
