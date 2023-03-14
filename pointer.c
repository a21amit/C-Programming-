#include<stdio.h>
int main()
{
	int a=10, *iptr;
	float b=2.01, *fptr;
	iptr=&a;
	fptr=&b;
	printf("%d",a);
	printf("\n");
	printf("%d",&iptr);
	printf("\n");
	printf("%f",b);
	printf("\n");
        printf("%f",*fptr);
	return 0;
}
