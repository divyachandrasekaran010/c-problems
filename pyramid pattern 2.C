pyramid pattern 2
enter a number:5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
#include<stdio.h>
int main(){
    int i,j,n,s;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(s=1;s<=n-i;s++){
            printf("  ");}
        for(j=1;j<=2*i-1;j++){
            printf("* ");}
            printf("\n");
    }
}