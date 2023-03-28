#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a,b;
	printf("enter a number");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d,b=%d",a,b);
	swap(a,b);
}
void swap(int a,int b)
{
	if(a^=b^=a^=b)
	{
		printf("after swap a=%d,b=%d",a,b);
	}
}
