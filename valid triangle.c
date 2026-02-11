Valid Triangle (Angles)
Input: 60 60 60
Output: Valid triangle
Explanation: Sum of angles must be 180°.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input:");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b+c==180){
        printf("valid triangle");
    }
    else{
        printf("its not valid triangle");
    }
    return 0;
}