#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid) {
        sleep(10);
        wait(NULL);
    } else {
        exit(0);
    }

    return 0;
}

