#include<stdio.h>
int main()
{
	int n;
	printf("enter elem");
	scanf("%d",&n);
	int arr[n],i,j;
	printf("enter ele");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("repeated %d",arr[i]);
				break;
			 }
		}
	}
}
