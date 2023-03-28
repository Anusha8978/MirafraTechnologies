#include<stdio.h>
int stlen(char str[]);
int main()
{
	char str[20];
	printf("enter a string");
	scanf("%s",str);
	printf("%d",stlen(str));
}
int stlen(char str[])
{
	int i=0;
	for(i=0;str[i]!=0;i++);
	return i;
}





