#include<stdio.h>
int main()
{
	int arr[]={8,5,4,2,7,9};
	int i,max=arr[0];
	for(i=0;i<=5;i++)
	{
		if(arr[i]>=max)
		{
			max=arr[i];
		}
	}
	printf("%d",max);
}

