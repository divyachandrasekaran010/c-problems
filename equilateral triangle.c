Type of Triangle
Input: 5 5 5
Output: Equilateral triangle
Explanation: All sides equal → equilateral.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input:");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && a==c && b==c){
        printf("equilateral triangle");
    }
    else{
        printf("its not equilateral triangle");
    }
    return 0;
}