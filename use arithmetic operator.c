#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
   c=a;
   a/=b;
  d=c%b;
  printf("%d %d",a,d);
    return 0;
}