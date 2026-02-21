Mobile Data Limit Exhaustion Checker (While Loop)
Using a while loop, determine how many days the data pack lasted and remaining data.
Test Cases
Input
10
5
2 3 4 1 2
Output
Days Used: 4
Remaining Data: 0GB


#include<stdio.h>
int main(){
    int totaldata,n,usage,count=0;
    int i=0;
    scanf("%d",&totaldata);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&usage);
        if(totaldata>=usage){
           totaldata-=usage ;
           count++;
        }
        else{
            break;
        }
        i++;
    }
    printf("days data lasted:%d\n",count);
    printf("remaing data:%d",totaldata);
    return 0;
    
}