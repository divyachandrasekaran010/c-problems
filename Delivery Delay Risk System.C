Delivery Delay Risk System

Find total delay time and count deliveries delayed more than 30 minutes.
Input
5
10 45 20 60 15
Output
Total Delay: 150
Delayed Deliveries: 2

#include<stdio.h>
int main(){
    int i, n,delay,total=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&delay);
        total+=delay;
        if(delay>30){
            count++;
        }
    }
    printf("Total delay:%d\n",total);
    printf("delayed deliveries:%d",count);
    return 0;
    
}