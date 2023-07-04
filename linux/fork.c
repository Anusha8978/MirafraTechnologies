#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;
pid=fork();
if(pid==0)
{
sleep(5);
printf("child pid %d\n",getpid());
printf("child parent pid %d\n",getppid());
}
else
sleep(5);
printf("parent pid %d\n",getpid());
printf("parent process pid %d\n",getppid());

{
}
}
