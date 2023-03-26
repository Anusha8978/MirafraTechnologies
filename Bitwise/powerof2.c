#include<stdio.h>
int main()
{
	int x;
	printf("enter a number");
	scanf("%d",&x);
	if(x&(x-1)==0)
	{
		printf("power of 2");
	}
	else
		printf("not power of 2");
}
