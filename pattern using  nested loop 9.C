pattern using  nested loop 9
         *
        * * 
       * * * 
      * * * * 
     * * * * * 
    * * * * * * 
   * * * * * * * 
  * * * * * * * * 
 * * * * * * * * * 
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * * 
    * * * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         * 

#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    
    for(int i=n-1;i>=0;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
} 
