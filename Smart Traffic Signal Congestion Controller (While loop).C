Smart Traffic Signal Congestion Controller (WhileLoop)
Test Cases
Input
8
15 25 30 10 22 24 26 18
Output
Congestion Minutes: 5
Longest Congestion Streak: 3

#include<stdio.h>
int main() {
    int N, i = 0, congestion = 0, streak = 0, maxStreak = 0;
    scanf("%d", &N);
    int vehicles;
    while(i < N) {
        scanf("%d", &vehicles);
        if(vehicles > 20) {
            congestion++;
            streak++;
            if(streak > maxStreak)
                maxStreak = streak;
        } else {
            streak = 0;
        }
        i++;
    }
    printf("Congestion Minutes: %d\n", congestion);
    printf("Longest Congestion Streak: %d\n", maxStreak);
    return 0;
}