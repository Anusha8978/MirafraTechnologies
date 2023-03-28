#include<stdio.h>
int ststr(char s[],char sub[]);
int stlen(char sub[]);
int main()
{
	char s[20];
	char sub[20];
	int a,n;
	printf("enter a string");
	scanf("%s",s);
	printf("enter a sub-string");
	scanf("%s",sub);
	n=stlen(sub);
	a=ststr(s,sub);
	printf("%d\n",a-n);
}
int stlen(char sub[])
{
	int i;
	for(i=0;sub[i]!=0;i++)
		return i;
}
int ststr(char s[],char sub[])
{
	int i,j;
	for(i=0,j=0;s[i]!=0;i++)
	{
		if(s[i]!=sub[j])
			j++;
		else
			j=0;
		if(sub[j]==0)
			return i+1;
	}
}
