#include<stdio.h>
int main(){
int n,i,AT[10],BT[10],tat[10],wt[10],burst=0,ttat=0,twt=0,avgtat=0,avgwt=0,j,temp=0;
printf("Enter the number of process: ");
scanf("%d",&n);
printf("Enter the Arrival Time:\n");
for(i=0;i<n;i++){
printf("p%d: ",i);
scanf("%d",&AT[i]);
}
printf("Enter the Burst Time:\n");
for(i=0;i<n;i++){
printf("p%d: ",i);
scanf("%d",&BT[i]);
}
for(i=0;i<n;i++){
wt[i] = burst- AT[i];
burst=burst+BT[i];
tat[i] = wt[i]+BT[i];
}
for(i=0;i<n;i++){
ttat=ttat+tat[i];
twt=twt+wt[i];
}
avgtat=ttat/n;
avgwt=twt/n;
printf("Process  ArrivalTime       BurstTime     TurnAroundTime    WaitingTime ");
for(i=0;i<n;i++){
printf("\np%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,AT[i],BT[i],tat[i],wt[i]);
}
printf("Average Waiting time : %d\n",avgwt);
printf("Average Turn Around Time: %d\n",avgtat);
return 0;
}
