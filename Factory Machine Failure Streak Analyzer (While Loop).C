Factory Machine Failure Streak Analyzer (While Loop)
Using a while loop, count the longest continuous failure streak.
Test Cases
Input
7
1 0 0 1 0 0 0
Output
Longest Failure Streak: 3

#include <stdio.h>
int main() {
    int N, status;
    int i = 0;
    int currentStreak = 0;
    int maxStreak = 0;
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &status);
        if(status == 0) {
            currentStreak++;
            if(currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        }
        else {
            currentStreak = 0;
        }

        i++;
    }
    printf("Longest Failure Streak: %d", maxStreak);
    return 0;
}