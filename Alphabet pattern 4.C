alphabet pattern 4
enter a number:4 
   A
  ABA
 ABCBA
ABCDCBA

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
        for(j=i-1;j>=1;j--){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}
