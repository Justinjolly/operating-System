//fork(),getpid(),exec(),wait(),exit()
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main(){
int pid;
printf("getpid()\n The process id for current process is: %d\n", getpid());
printf("fork()create child process\n");
if(fork!=0){
printf("parent process starts and wait() executes");
wait(NULL);
printf("Waiting and execute another function");
char*args[]={"ls",NULL};
execvp(args[0],args);
exit(0);
printf("Execute not ends and parent ends");
}
else{
printf("Child process starts and ends");
}
printf("exit function");
exit(0);
printf("Exit not executing");
return 0;
}
