#include<stdio.h>
int main(){
    int n,fr,i,pg[50],frame[50],j,count=0,pf=0,k;
    printf("Enter the number of pages: ");
    scanf("%d",&n);
    printf("Enter the number of Frames: ");
    scanf("%d",&fr);
    printf("Enter the pages: \n");
    for(i=0;i<n;i++){
        scanf("%d",&pg[i]);
    }
    for(i=0;i<fr;i++)
    frame[i]=-1;
    for(i=0;i<n;i++){
    for(j=0;j<fr;j++){
    if(frame[j]==pg[i])
    break;
    }
    if(j==fr){
    frame[count++]=pg[i];
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
    if(count==fr){
    count=0;
    }    
    }
    printf("Page fault : %d\n",pf);
    return 0;
}