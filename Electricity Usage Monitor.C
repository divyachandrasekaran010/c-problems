Electricity Usage Monitor

#include <stdio.h>

int main() {
    int n,units,total=0;
    printf("input:");

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &units);
        total += units;
    }
        printf("Total units:%d",total);

    return 0;
}