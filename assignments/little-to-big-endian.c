#include<stdio.h>
int main()
{
	int n,x;
	printf("enter a number");
	scanf("%x",&n);
	x=((0x000000ff&n)<<24|(0x0000ff00&n)<<8|(0x00ff0000&n)>>8|(0xff000000&n)>>24 );
	{
		printf("%x\n",x);
	}
}


