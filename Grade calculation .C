Grade Calculation
Input: 82
Output: Grade B
Explanation: Marks ≥75 and <90 → Grade B.


#include<stdio.h>
int main(){
    int marks;
    printf("Input:");
    scanf("%d",&marks);
    if (marks>=90&&marks<=100){
        printf("A GRADE");
    }
    else if (marks>=75&&marks<90){
        printf("B GRADE");
    }
    else{
        printf("c grade");
    }
    return 0;
}