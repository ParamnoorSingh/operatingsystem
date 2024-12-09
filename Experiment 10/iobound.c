#include<stdio.h>
#include<unistd.h>
int main(){
    FILE *file = fopen("output.txt", "w");
    if(!file){
        perror("File opening failed");
        return 1;
    }
    for(int i = 0; i<100000; i++){
        fprintf(file, "This is line %d\n", i);
        fflush(file);
        usleep(10000);
    }
    fclose(file);
    return 0;
}