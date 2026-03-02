using nested loop for alphabet pattern 1:
enter a number:5
A
BB
CCC
DDDD
EEEEE

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%c",'A'+i);
        }
        printf("\n");
    }
}