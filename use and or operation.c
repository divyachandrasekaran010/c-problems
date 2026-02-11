#include <stdio.h>
int main() {
    int a,b;
    printf("input:");
    scanf("%d %d",&a,&b);
   int result =(a>0&&b>0)||(a==0&&b!=0)||(a!=0&&b==0);
  printf("%d",result);
    return 0;
}