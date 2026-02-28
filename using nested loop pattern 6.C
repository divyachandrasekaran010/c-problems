using nested loop pattern 6
1
22
333
4444
55555

#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d",i+1);
        }
        printf("\n");
    }
}