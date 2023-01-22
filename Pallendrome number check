#include<stdio.h>
int main()
{
        //pallendrom number?
        int num,rev=0,rem=0,sto=0;
        printf("Enter num :");
        scanf("%d",&num);
        sto=num;

        while(num>0)
        {
                rem=num%10;
                printf("rem %d\n",rem);
                rev=rem+(rev*10);
                printf("rev %d\n",rev);
                num=num/10;
        }
        if(rev==sto)
                printf("Your number is pallendrom");
        else
                printf("Your num is not pallendrom");
} 
