Check whether a number is perfect.
Input Format
Integer N
Output Format
Print Yes or No
Test Cases
● Input: 6 → Output: Yes
● Input: 28 → Output: Yes
● Input: 10 → Output:NO

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Input:");
    scanf("%d",&n);
    
    for(i=1;i<=n/2;i++){
        if(n%i==0){
          sum=sum+i;
        }
    }    
    if(sum==n){
        printf("output:yes");
    }
    else{
        printf("output:No");
    }
    return 0;
}