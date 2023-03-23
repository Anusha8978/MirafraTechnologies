#include<stdio.h>
union month
{
	int x;
	float y;
	char z;
};
int main()
{
	union month m;
	printf("size of union=%ld",sizeof(m));
}
