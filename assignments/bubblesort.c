#include<stdio.h>
void bubble(int arr[]);
int main()
{
	int arr[5]={2,4,1,8,3};
	int i;
	bubble(arr);
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void bubble(int arr[])
{
	int i,j=0,temp;
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<=5-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

}
