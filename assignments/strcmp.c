#include<stdio.h>
int stcmp(char s1[],char s2[]);
int main()
{
	char s1[20];
	char s2[20];
	printf("enter s1 string");
	scanf("%s",s1);
	printf("enter s2 string");
	scanf("%s",s2);
	printf("%d\n",stcmp(s1,s2));
}
int stcmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!=0;i++)
	{
		if(s1[i]<s2[i])
			return -1;
		if(s1[i]>s2[i])
			return 1;
	}
	if(s1[i]==0 && s2[i]==0)
		return 0;
	if(s1[i]==0 && s2[i]!=0)
		return -1;
	if(s1[i]!=0 && s2[i]==0)
		return 1;
}
