#include<stdio.h>
int main()
{
	int n,x;
	printf("enter a number");
	scanf("%d",&n);
	x=(~(n));
	printf("before adding n=%d\n",n);
	printf("after adding n=%d\n",x);
}

