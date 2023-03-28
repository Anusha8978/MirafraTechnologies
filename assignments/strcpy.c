#include<stdio.h>
char stcpy(char d[],char s[]);
int main()
{
	char s[20]="anusha";
	char d[20]="thampu";
	stcpy(d,s);
}
char stcpy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
	printf("d=%s\n",d);
	printf("s=%s\n",s);
}



