Employee Overtime Cost Tracker

Calculate total overtime hours and overtime cost (₹200/hour).
Count days with overtime &gt; 3 hours.
Input
5
2 4 1 5 3
Output
Total Overtime Hours: 15
Overtime Cost: 3000
Heavy Overtime Days: 2
#include<stdio.h>

int main() {
    int n, i, hours;
    int total = 0, heavyDays = 0;
    int cost;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &hours);
        total += hours;

        if(hours > 3) {
            heavyDays++;
        }
    }

    cost = total * 200;

    printf("Total Overtime Hours: %d\n", total);
    printf("Overtime Cost: %d\n", cost);
    printf("Heavy Overtime Days: %d", heavyDays);

    return 0;
}