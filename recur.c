#include<stdio.h>
int sd(int n);
int main()
{
	int num, sum=0;
	printf("Enter num: ");
	scanf("%d",&num);
	sum=sum+sd(num);
	printf("Sum is %d",sum);
}
int sd(int n)
{
	int rem;
	rem=n%10;
	if (n==0)
		return 0;
	else
		return(rem+sd(n/10));
}

