use logical and operator on two values


#include <stdio.h>
int main() {
    int a,b;
    printf("input:");
    scanf("%d %d",&a,&b);
    int c=a&&b;
    printf("%d",c);
    return 0;
}