Online Exam Cheating Risk Detector
Calculate total risk score and count high-risk sessions (>50).
Input
5
20 60 30 80 10
Output
Total Risk: 200
High Risk Sessions: 2

#include<stdio.h>
int main() {
    int n, score;
    int totalRisk = 0, highRisk = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &score);
        totalRisk += score;

        if(score > 50) {
            highRisk++;
        }
    }
    printf("Total Risk: %d\n", totalRisk);
    printf("High Risk Sessions: %d", highRisk);
    return 0;  
}