#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main(int argc, char *argv[]){
    if(argc!=2){
        fprintf(stderr, "Usage: %s <number of megabytes>\n", argv[0]);
        return 1;
    }

    int mb = atoi(argv[1]);
    if (mb <= 0){
        fprintf(stderr, "Please provide a positive integer for memory allocation \n");
        return 1;
    }

    size_t bytes = mb * 1024 * 1024;
    char *memory = (char *)malloc(bytes);
    if(memory == NULL){
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    memset(memory, 0, bytes);

    printf("Allocated %d MB of memory. Check memory usage with 'free' command.\n",mb);
    printf("Current Process ID = %d\n", getpid());
    free(memory);
    return 0;
}