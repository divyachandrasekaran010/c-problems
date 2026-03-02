using nested loop pattern 
enter a number:5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

#include<stdio.h>
int main(){
    int i,j,n,num=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}