classroom noise violation detector 
#include<stdio.h>
int main(){
    int n,i=0;
    int noise;
    int count=0;
    int streak=0;
    int max=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&noise);
        if(noise>70){
            count++;
            streak++;
            if(streak>max){
                max=streak;
            }
        }else{
            streak=0;
        }
        i++;
    }
    printf("noise violations:%d\n",count);
    printf("longest violation streak:%d",max);
    return 0;
}