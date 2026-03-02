pyramid pattern 
enter a number:5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

#include<stdio.h>
int main(){
    int i,j,n,s;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++)
            printf("  ");
        for(j=0;j<2*i+1;j++)
            printf("* ");
            printf("\n");
    }
}