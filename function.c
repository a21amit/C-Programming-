#include<stdio.h>
int swap(int num);
int main()
{
	int n;
	printf("Enter num ");
	scanf("%d",&n);
	swap(n);
}
int swap(int num)
{
	int i,sto;
	for(i=1;i<=10;i++)
	{
		sto=num;
		sto=num*i;
		printf("%d * %d = %d\n",num,i,sto);
	}
	return 0;
	
}
