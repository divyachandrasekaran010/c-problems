using nested loop pattern 8:
enter a number:5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 


#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
}