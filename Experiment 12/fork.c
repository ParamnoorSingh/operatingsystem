#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<wait.h>
int main(){
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        if(fork() == 0){
            printf("Child process id is : %d, parent process id is %d\n", getpid(), getppid());
            exit(0);
        }
    }
    for(int i = 0; i<n; i++){
        wait(NULL);
    }
    return 0;
}