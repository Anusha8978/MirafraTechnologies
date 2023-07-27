#include<stdio.h>
int main()
{
int arr[]={8,5,4,7,9};
int i,min=arr[0];
for(i=1;i<min;i++)
{
if(arr[i]<min)
{
min=arr[i];
}
}
printf("%d",min);
}
