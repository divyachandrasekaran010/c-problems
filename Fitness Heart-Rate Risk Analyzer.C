Fitness Heart-Rate Risk AnalyzerS
Find maximum heart rate and count dangerous readings (>140 bpm).
Test Cases
Input
5
90 145 130 160 120
Output
Max Heart Rate: 160
Danger Readings: 2


#include<stdio.h>
int main() {
    int n, rate;
    int maxRate = 0, dangerCount = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &rate);
        if(rate > maxRate) {
            maxRate = rate;
        }
        if(rate > 140) {
            dangerCount++;
        }
    }
    printf("Max Heart Rate: %d\n", maxRate);
    printf("Danger Readings: %d", dangerCount);
    return 0;
}
