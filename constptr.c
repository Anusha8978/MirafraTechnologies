// const to ptr //

#include<stdio.h>
int main()
{
	int x=6,y=9;

	int * const ptr=&x;

	*ptr=10;    //values accepted

	//ptr=&x    address not accepted

	printf("%d\n",x);

	int * const ptr1=&y;

	*ptr1=10;

	//ptr1=&y not accepted

	printf("%d\n",y);

}


//pointer to const //

#include<stdio.h>
int main()
{
	int x=6,y=9;

	int const * ptr;

	ptr=&x;      //address  accepted

	//*ptr=10;   values not accepted

	printf("%d\n",x);

	int const * ptr1;

	ptr1=&y;

	//*ptr1=20;  not accepted

	printf("%d\n",y);
}
