#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],cpy[20];
	int comp;
	printf("Enter the string:");
		gets(str1);
	strcpy(str1,cpy);
	strrev(cpy);
	comp=strcmp(str1,cpy);
	printf("Reverse string is:");
		puts(str1);
	if(comp==0)
		printf("Is pallendrom");
	else
		printf("Nott pallendrom");
	return 0;
}
