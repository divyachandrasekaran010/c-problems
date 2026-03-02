 using nested loop alphabet pattern 5
enter a number:5
E 
D E 
C D E 
B C D E 
A B C D E 

#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k='A'+(5-i);
        for(j=1;j<=i;j++){
            printf("%c ", k);
            k++;
        }
        printf("\n");
    }
}