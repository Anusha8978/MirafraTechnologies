#include<stdio.h>
char stncat(char s1[],char s2[],int n);
int main()
{	
	int n;
	printf("enter n value");
	scanf("%d",&n);
	char s1[20]="anusha";
	char s2[20]="thampu";
	stncat(s1,s2,n);
	printf("%s",s2);
}
char stncat(char s1[],char s2[],int n)
{
	int i=0,j;
	for(i=0;s2[i]!=0;i++);
	
	
	for(j=0;s1[j]!=0 && j<n;i++,j++)
	{
		s2[i]=s1[j];
	}
}


