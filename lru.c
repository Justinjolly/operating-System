#include<stdio.h>
int main(){
    int n,i,fr,pg[30],frame[40],k,j,flag[10],pf=0,count[20],next,min;
    printf("Enter the number of pages: ");
    scanf("%d",&n);
    printf("Enter the pages: ");
    for(i=0;i<n;i++){
        scanf("%d",&pg[i]);
        flag[i]=0;
    }
    printf("Enter the number of frames: ");
    scanf("%d",&fr);
    for(i=0;i<fr;i++){
        frame[i]=-1;
        count[i]=0;
    }
    for(i=0;i<n;i++){  
        for(j=0;j<fr;j++){
            if(frame[j]==pg[i]){
                flag[i]=1;
                count[j]=next;
                next++;
            }
        }
        if(flag[i]==0){
            if(i<fr){
                frame[i]=pg[i];
                count[i]=next;
                next++;
            }
            else{
                min=0;
                for(j=1;j<fr;j++)
                if(count[min]>count[j])
                min=j;
                frame[min]=pg[i];
                count[min]=next;
                next++;
            }
        pf++;
        }
    
    for(k=0;k<fr;k++){
        if(frame[k]==-1){
            printf(" ");
        }
        else{
            printf("\t%d",frame[k]);
        }
    }
    printf("\n");
    }
    printf("Page Fault: %d",pf);
    return 0;
}