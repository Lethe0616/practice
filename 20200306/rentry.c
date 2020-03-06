#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int a = 0;
int b = 0;

int test()
{
    a++;
    sleep(3);
    b++;
    printf("%d\n", a+b);
}
void sigcb(int signo)
{
    test();
}
int main()
{
    signal(SIGINT, sigcb);
    test();
    return 0;
}
