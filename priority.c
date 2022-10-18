#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,p[20],i,bt[20],j,temp1,temp2,wt[20],cmpt[20],tat[20];
    float ttat=0,twt=0,atat=0,awt=0;
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the priority: ");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("Enter the burst time: ");
    for (i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(p[i]>p[j]){
                temp1=bt[i];
                bt[i]=bt[j];
                bt[j]=temp1;
                temp2=p[i];
                p[i]=p[j];
                p[j]=temp2;
            }
    cmpt[0]=bt[0];
    wt[0]=0;
    for(i=1;i<n;i++)
        cmpt[i]=bt[i]+cmpt[i-1];
    for(i=0;i<n;i++){
        tat[i]=cmpt[i];
        wt[i]=tat[i]-bt[i];
        ttat+=tat[i];
        twt+=wt[i];
    }
    atat=ttat/n;
    awt=twt/n;
    printf("\nProcess waitingTime  TurnAroundTime\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\t\t%d\n",i,wt[i],tat[i]);
    }
    printf("Average waiting time: %f\n",awt);
    printf("Average turn Around Time: %f",atat);
    return 0;
}