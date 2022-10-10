#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty,x=0,n;
void producer(){
    --mutex;
    ++full;
    --empty;
    x++;
    printf("Producer produce an item %d\n",x);
    ++mutex;
}
void consumer(){
    --mutex;
    --full;
    ++empty;
    printf("Consumer consume item %d\n",x);
    x--;
    ++mutex;
}
int main(){
    int i,op;
    printf("Enter the size of the buffer\n: ");
    scanf("%d",&n);
    empty=n;
    for(i=1;i>0;i++){
        printf("Enter the option\n");
        printf("1.Producer\n2.Consumer\n3.Exit\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                if(mutex=1&&empty!=0){
                    producer();
                }
                else{
                    printf("\nBuffer full\n");
                }
                break;
            case 2:
                if(mutex=1&&full!=0){
                    consumer();
                }
                else{
                    printf("\nBuffer Empty!\n");
                }
                break;
            case 3:
                exit(0);
                break;
        }
    }
    return 0;
}