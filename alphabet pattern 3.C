alphabet pattern 3
enter a number:5
ABCDE
ABCD
ABC
AB
A

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}