alphabet pattern 2
enter a number:5
A
AB
ABC
ABCD
ABCDE

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}