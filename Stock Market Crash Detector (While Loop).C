Stock Market Crash Detector (While Loop)
Test Cases
Input
6
500 480 460 450 470 440
Output
Crash Day: 4
Total Drops: 4

#include <stdio.h>
int main() {
    int N, i = 1, crashDay = -1, totalDrop = 0, streak = 0;
    scanf("%d", &N);
    int prev, curr;
    scanf("%d", &prev);
    while(i < N) {
        scanf("%d", &curr);
        if(curr < prev) {
            totalDrop++;
            streak++;
            if(streak == 3 && crashDay == -1)
                crashDay = i + 1;
        } else {
            streak = 0;
        }
        prev = curr;
        i++;
    }
    if(crashDay == -1)
        printf("Crash Day: Not Detected\n");
    else
        printf("Crash Day: %d\n", crashDay);
    printf("Total Drops: %d\n", totalDrop);
    return 0;
}