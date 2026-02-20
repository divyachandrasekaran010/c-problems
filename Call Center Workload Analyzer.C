Call Center Workload Analyzer
Calculate total calls and count overloaded hours (>40 calls).
Test Cases
Input
5
30 45 50 20 60
Output
Total Calls: 205
Overloaded Hours: 3
#include<stdio.h>
int main() {
    int n, calls;
    int totalCalls = 0, overloadedHours = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &calls);
        totalCalls += calls;
        if(calls > 40) {
            overloadedHours++;
        }
    }
    printf("Total Calls: %d\n", totalCalls);
    printf("Overloaded Hours: %d", overloadedHours);
    return 0;
}
