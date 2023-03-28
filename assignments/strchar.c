#include<stdio.h>
int stchar(char s[],char c);
int main()
{
	char c;
	printf("enter a char");
	scanf("%c",&c);
	char s[20]="anusha";
	stchar(s,c);
}
int stchar(char s[],char c)
{
	int i;
	for(i=0;s[i]!=c;i++)
	{
		if(s[i]==c)
			break;
	}
	printf("%d\n",i);
}
