#include<stdio.h>
struct sjf{
        int bt;
        int wt;
        int tat;
    }p[10];
int main(){
    int n,i,j;
    float ttat=0,twt=0,atat=0,awt=0;
    struct sjf tmp;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the burst time: ");
    for(i=0;i<n;i++){
        scanf("%d",&p[i].bt);
    }
    p[0].wt=0;
    p[0].tat=p[0].bt;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(p[i].bt>p[j].bt){
                tmp=p[i];
                p[i]=p[j];
                p[j]=tmp;
            }
        }
    }
    for(i=0;i<n;i++){
        p[i].wt = p[i-1].wt+p[i-1].bt;
        p[i].tat = p[i].wt+p[i].bt;
        ttat=ttat+p[i].tat;
        twt=twt+p[i].wt;
        }
        awt=twt/n;
        atat=ttat/n;
        printf("\nprocess  waitingTime  TurnAroundTime");
        for(i=0;i<n;i++){
            printf("\n%d\t%d\t%d\n",i,p[i].wt,p[i].tat);
        }
        printf("\nAverage turn around time: %f\n",atat);
        printf("Average waiting time: %f\n",awt);
    return 0;
}