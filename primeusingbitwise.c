#include<stdio.h>
int main()
{
	int n,z;
	printf("enter a num");
	scanf("%d",&n);
	z=n-1;
	if(n&z==n-1)
	{
		printf("prime");
	}
	else
		printf("not prime");
}

