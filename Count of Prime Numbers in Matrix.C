Count of Prime Numbers in Matrix


Test Case
Input
 2 3
 2 3 4
 5 6 7
Output
 4
 
#include <stdio.h>
int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main(){
    int R,C,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            if(isPrime(a[i][j]))
                count++;
    printf("%d",count);
}