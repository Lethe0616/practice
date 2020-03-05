#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sigcb(int signo)
{
    //一次事件（一个信号）只能处理一个子进程的退出
    //SIGCHLD是非可靠信号，为了避免事件丢失导致，子进程无法完全处理，因此需要循环等待
    //直到没有子进程退出为止 （waitpid出错了/waitpid返回值等于0）
    //反向理解：如果有子进程退出，就一直处理
    while(waitpid(-1, NULL, 0) > 0);
}
int main()
{
    signal(SIGCHLD, sigcb);
    pid_t pid = fork();
    if (pid == 0) {
        sleep(5);
        exit(0);
    }

    while(1) {
        printf("this is parents\n");
        sleep(1);
    }
    return 0;
}
