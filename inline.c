#include<stdio.h>
static inline void swap(int *p,int *q);
int main()
{
int p=3,q=2,a=9,b=5;
swap(&p,&q);
printf("after swap p=%d,q=%d\n",p,q);
swap(&a,&b);
printf("after swap a=%d,b=%d\n",a,b);
}
static inline void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}
