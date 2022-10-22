#include<stdio.h>
int main(){
    int n,allo[10][10],j,i,max[10][10],avail[10],need[10][10],m,work[20],finish[20],k,x,ind=0,safe[20];
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the number of resources: ");
    scanf("%d",&m);
    printf("Enter the allocation matrix:\n ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("allocation of[%d][%d]: ",i,j);
            scanf("%d",&allo[i][j]);
        }
    }
    printf("Enter the instance of max matrix:\n ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("instance of[%d][%d]: ",i,j);
            scanf("%d",&max[i][j]);
        }
    }
    printf("Enter the available: ");
    for(i=0;i<m;i++){
        printf("Available of[%d]: ",i);
        scanf("%d",&avail[i]);
    }
    printf("Allocation\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",allo[i][j]);
        }
        printf("\n");
    }
    printf("max\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",max[i][j]);
        }
        printf("\n");
    }
    printf("need\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            need[i][j]=max[i][j]-allo[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",need[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        work[i]=avail[i];
    }
    for(i=0;i<n;i++){
        finish[i]=0;
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            if(finish[i]==0){
                int flag=0;
                for(j=0;j<m;j++){
                    if(need[i][j]>work[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    safe[ind++]=i;
                    for(x=0;x<m;x++){
                        work[x]+=allo[i][x];
                        finish[i]=1;
                }
            }
        }
    }
    }
    printf("\n Safe Sequence \n");
  for(i=0;i<n;i++){
    printf("P%d ",safe[i]);
  }

    return 0;
}