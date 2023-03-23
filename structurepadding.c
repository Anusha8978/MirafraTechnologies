#include<stdio.h>
#pragma pack(1)
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
	printf("size of ex1=%lu",sizeof(a)); //size is 12 after using #pragma size is 7
	printf("size of ex2=%lu",sizeof(b)); //size is 8 after using #pragma size is 7
	printf("size of ex3=%lu",sizeof(c)); //size is 16 after using #pragma size is 13
}
