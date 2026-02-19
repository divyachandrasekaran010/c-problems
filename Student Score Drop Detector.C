Student Score Drop Detector
Calculate average score and count subjects scoring below 40.

#include<stdio.h>
int main(){
    int i,n,mark,total=0,count=0;
    int average;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&mark);
        total+=mark;
        if(mark<40){
            count++;
        }
        average=total/n;
    }
    printf("average score:%d\n",average);
    printf("failed subjects:%d",count);
    return 0;
}