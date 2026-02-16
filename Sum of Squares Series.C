Sum of Squares Series:

#include<stdio.h>
int main(){
    int i=1,n,s=0;
    printf("Input:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i*i;
        printf("output :%d\n",s);
    }
    return 0;
}
