Fuel Price Shock Detector

#include<stdio.h>
int main(){
    int i,n,price,maxprice=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&price);
        if(price>maxprice){
           maxprice =price;
        }
        if(price>100){
            count++;
        }
    }
    printf("highest price :%d\n",maxprice);
    printf("highest price days:%d",count);
    return 0;
}