#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	fork();
	printf("hi"); 
	fork();
	printf("bye"); 
	fork();
	//fork();
	printf("ok\n");
	return 0;
}
