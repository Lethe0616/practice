/*=============================================================== 
*   Copyright (C) . All rights reserved.")
*   文件名称： 
*   创 建 者：zhang
*   创建日期：
*   描    述：在这个demo中演示信号被阻塞的基本操作 
================================================================*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sigcb(int signo)
{
    printf("recv a signo:%d\n", signo);
}
int main()
{
    signal(SIGINT, sigcb);
    signal(SIGRTMIN+5, sigcb);

    sigset_t set;//定义的局部变量，有可能有其它数据，有可能会对后续造成影响
    sigemptyset(&set); // int sigemptyset(sigset_t *set);  清空信号集合
    //int sigfillset(sigset_t *set);  将所有信号添加到集合set中
    //int sigaddset(sigset_t *set, int signum);  将signum添加到set集合中
    sigfillset(&set);//向集合中添加所有信号

    sigprocmask(SIG_BLOCK, &set, NULL); //对set集合中的信号进行阻塞
    printf("按下回车，继续\n");
    getchar();//等待标准输入换行，流程继续， 在不按回车期间,信号都是被阻塞的,期间向进程发送信号
    sigprocmask(SIG_UNBLOCK, &set, NULL);

    return 0;
}

