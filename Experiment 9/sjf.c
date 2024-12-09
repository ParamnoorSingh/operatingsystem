#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of processes: \n");
    scanf("%d",&n);
    int burst[n];
    printf("Enter the burst time of %d processes\n",n);
    for(int i = 0; i<n; i++){
        scanf("%d",&burst[i]);
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if (burst[j] > burst[j+1]){
            int temp = burst[j];
            burst[j] = burst[j+1];
            burst[j+1] = temp;}
        }
    }

    printf("The burst time according to shortest job first algorithm\n");
    for(int i = 0; i<n; i++){
        printf("%d\n",burst[i]);
    }

    int comp[n];
    comp[0] = burst[0];

    for(int i = 0; i<n; i++){
        comp[i+1] = comp[i] + burst[i+1];
    }

    printf("Completion time of %d processes \n",n);
    for(int i = 0; i<n; i++){
        printf("%d\n",comp[i]);
    }

    int waitingtime[n];
    for(int i = 0; i<n; i++){
        waitingtime[i] = comp[i] - burst[i];
    }

    float averageTAT = 0.0;
    for(int i = 0; i<n; i++){
        averageTAT += waitingtime[i];
    }

    printf("Average Waiting time of %d processes is %.2f\n",n,averageTAT/n);
    return 0;



}