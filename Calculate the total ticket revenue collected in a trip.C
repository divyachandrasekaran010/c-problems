Calculate the total ticket revenue collected in a trip.

#include<stdio.h>
int main(){
    int i,n,a,total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        total+=a;
    }
    printf("Total collection₹:%d",total);
    return 0;
}