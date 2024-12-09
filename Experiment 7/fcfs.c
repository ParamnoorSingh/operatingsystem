#include <stdio.h>

int main() {
    int n = 5; 
    int arrival_time[5], burst_time[5];
    int turn_around_time[5], waiting_time[5], completion_time[5];
    int total_tat = 0, total_wt = 0;

    printf("Enter the arrival time of 5 processes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrival_time[i]);
    }

    printf("Enter the burst time of 5 processes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &burst_time[i]);
    }


    completion_time[0] = arrival_time[0] + burst_time[0];
    turn_around_time[0] = completion_time[0] - arrival_time[0];
    waiting_time[0] = turn_around_time[0] - burst_time[0];

    for (int i = 1; i < n; i++) {
        
        completion_time[i] = (completion_time[i - 1] > arrival_time[i]) ? completion_time[i - 1] : arrival_time[i];
        completion_time[i] += burst_time[i];

        turn_around_time[i] = completion_time[i] - arrival_time[i];
        waiting_time[i] = turn_around_time[i] - burst_time[i];
    }

    
    for (int i = 0; i < n; i++) {
        total_tat += turn_around_time[i];
        total_wt += waiting_time[i];
    }

    printf("The average turn around time is %.2f\n", (float)total_tat / n);
    printf("The average waiting time is %.2f\n", (float)total_wt / n);

    return 0;
}