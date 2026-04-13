#include <sys/types.h>
 #include <sys/wait.h>
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char *argv[])
 {
    int n = atoi(argv[1]);
    int processNumber = 0;
 // fork a process
 pid_t pid = getpid();
 for (int i = 0; i < n; i++)
 {
    if (pid > 0) {
    pid = fork();
    } 
    if (pid == 0) {
        processNumber = i + 1;
        break;
    }

 }
 

 if (pid == 0) {

 // child process
 printf("This is child process %d.\n", processNumber);
 sleep(5);
 exit(0);

 } else if (pid > 0) {

 // parent process
 pid = getpid();
 pid = wait(NULL);
 printf("Parent process finished.\n");
 exit(1);

 } else {

 printf("Fork failed.\n");
 exit(1);

 }
 }