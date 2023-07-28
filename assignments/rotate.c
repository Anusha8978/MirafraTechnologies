#include <stdio.h>

int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int n;
printf("enter size");
scanf("%d",&n);
int i,j,t;
for(i=0;i<n;i++)
{
    for(j=10-1;j>i;j--)
 {
     t=a[j];
     a[j]=a[j-1];
     a[j-1]=t;
 }   
}
printf("after rotate values\n");
for(i=0;i<10;i++)
{
    printf("%d",a[i]);
}
}
