Online Sales Target Tracker
Calculate total revenue and count target-achieved days (&gt;₹50,000).
Input
5
40000 60000 55000 30000 70000
Output
Total Revenue: 255000
Target Days: 3
#include<stdio.h>
int main(){
    int n,revenue,i,total=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&revenue);
        total+=revenue;
        if(revenue>50000){
            count++;
        }
    }
    printf("Total revenue:%d\n",total);
    printf("target days:%d",count);
    return 0;
}