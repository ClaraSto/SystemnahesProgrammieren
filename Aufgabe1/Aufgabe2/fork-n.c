#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    // Arguments
    if (argc < 2) {
        return 1;
    }

    int n = atoi(argv[1]);

    // Childprocess
    for (int i = 1; i <= n; i++) {
        pid_t pid = fork();

        if (pid == 0) {
                        printf("This is child process %d.\n", i);
            sleep(5);
            exit(0); 
        }
    }

    // Parentprogress waits
    for (int i = 0; i < n; i++) {
                wait(NULL);
    }

    printf("Parent process finished.\n");
    return 0;
}
