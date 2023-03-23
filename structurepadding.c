#include<stdio.h>
struct ex1
{
	char x;
	int y;
	short z;
};
struct ex2
{
	int x;
	short y;
	char z;
};
struct ex3
{
	double x;
	char y;
	float z;
};
int main()
{
	struct ex1 a;
	struct ex2 b;
	struct ex3 c;
	printf("size of ex1=%lu",sizeof(a)); //size is 12
	printf("size of ex2=%lu",sizeof(b)); //size is 8
	printf("size of ex3=%lu",sizeof(c)); //size is 16
}
