Classroom Noise Level Monitor

Find maximum noise level and count noisy periods (>70 dB).
Test Cases
Input
5
65 72 68 80 60
Output
Maximum Noise: 80
Noisy Periods: 2
Input
3
50 60 65
Output
Maximum Noise: 65
Noisy Periods: 0

#include<stdio.h>
int main(){
    int i, n,noise,max,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&noise);
         if(i == 0) {
            max = noise;  
        }

        if(noise > max) {
            max = noise; 
        }
        if(noise>70){
            count++;
        }
    }
    printf("maximum noise:%d\n",max);
    printf("noisy periods:%d",count);
    return 0;
    
}
