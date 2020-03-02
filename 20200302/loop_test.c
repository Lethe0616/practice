/*=============================================================== 
*   Copyright (C) . All rights reserved.")
*   文件名称： 
*   创 建 者：zhang
*   创建日期：
*   描    述：这个代码实现软件产生信号的各种方式 
================================================================*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>


int main()
{
    //kill(getpid(), SIGINT);
    //raise(SIGTERM);
    abort();
    //alarm(3);
    while(1) {
        printf("leihoua~~\n");
        sleep(10);
    }
    return 0;
}

