#include<stdio.h>
char stcpy(char d[],char s[],int n);
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	char s[20]="anusha";
	char d[20]="thampu";
	stcpy(d,s,n);
}
char stcpy(char d[],char s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
	printf("d=%s\n",d);
	printf("s=%s\n",s);
}

