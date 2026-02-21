Loan EMI Default Streak Analyzer (While Loop)
Using a while loop, calculate the longest consecutive default streak.
Test Cases
Input
8
1 0 0 1 0 0 0 1
Output
Longest Default Streak: 3
#include <stdio.h>
int main() {
    int N, i = 0;
    scanf("%d", &N);
    int pay[N], streak = 0, maxStreak = 0;
    while(i < N) {
        scanf("%d", &pay[i]);
        if(pay[i] == 0) {
            streak++;
            if(streak > maxStreak)
                maxStreak = streak;
        } else {
            streak = 0;
        }
        i++;
    }
    printf("Longest Default Streak: %d\n", maxStreak);
    return 0;
}