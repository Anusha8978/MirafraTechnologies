#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	struct student *next;
}student;

student *createnode();
void printll(student *p);
int prime(int);
int main()
{
	student *Head=NULL,*New=NULL,*Last=NULL; 
	char ch;
	int a,b,i,q;
	printf("enter limits\n");
	scanf("%d\n%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		q=prime(i);
		if(q==1)	
		{
			New=createnode();
			if(!Head)
				Head=New;
			else
			{
				Last->next=New;
			}
			Last=New;
		}
	}	
	printll(Head);
}


student *createnode(int a)
{
	student *new = (student *)malloc(sizeof(student));
	new->id=a;
	new->next = NULL;
	return new;
}
void printll(student *p)
{
	while(p)
	{
		printf("%d \n",p->id);
		p=p->next;
	}
}
int prime(int a)
{
	int j;
	for(j=2;j<=a/2;j++)
	{
		if(a%j==0)
		{
			return 0;
		}
	}
	return 1;
}

