#include<stdio.h>
int main()
{
	int x;
	printf("enter a number");
	scanf("%d",&x);
	if(((x&(x-1))==0) && (x^4))
	{
		printf("power of 4");
	}
	else
		printf("not power of 4");
}


