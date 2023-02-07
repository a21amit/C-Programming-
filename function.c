#include<stdio.h>
int swap();
int main()
{
	swap();
}
int swap()
{
	int a,b,c=0;
	printf("Enter a, b :");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d\n%d",a,b);
	return 0;
	
}
