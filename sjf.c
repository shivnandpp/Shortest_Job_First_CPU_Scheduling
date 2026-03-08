#include <stdio.h>
#include <limits.h>

struct process{
    char pid[10];
    int at,bt,ct,wt,tat;
    int completed;
};

int main(){
    int n;
    struct process p[20];
    int time = 0, completed = 0;
    float total_wt = 0, total_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d",&n);

    printf("\nEnter Process ID, Arrival Time and Burst Time\n");
    printf("Example: P1 0 5\n\n");

    for(int i=0;i<n;i++){
        printf("Process %d: ", i+1);
        scanf("%s %d %d",p[i].pid,&p[i].at,&p[i].bt);
        p[i].completed = 0;
    }

    while(completed < n){
        int idx = -1;
        int min = INT_MAX;

        for(int i=0;i<n;i++){
            if(p[i].at <= time && p[i].completed == 0){
                if(p[i].bt < min){
                    min = p[i].bt;
                    idx = i;
                }
            }
        }

        if(idx != -1){
            time += p[idx].bt;
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;

            total_wt += p[idx].wt;
            total_tat += p[idx].tat;

            p[idx].completed = 1;
            completed++;
        }
        else{
            time++;
        }
    }

    printf("\nPID\tWT\tTAT\n");
    for(int i=0;i<n;i++){
        printf("%s\t%d\t%d\n",p[i].pid,p[i].wt,p[i].tat);
    }

    printf("\nAverage Waiting Time = %.2f\n", total_wt/n);
    printf("Average Turnaround Time = %.2f\n", total_tat/n);

    return 0;
}
