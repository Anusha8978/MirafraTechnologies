#include<stdio.h>
enum month
{
	jan,feb,march,april,may
};
int main()
{
	enum month m;
	printf("size of enum=%lu\n",sizeof(m));
	printf("%d%d%d%d%d\n",jan,feb,march,april,may);
}
