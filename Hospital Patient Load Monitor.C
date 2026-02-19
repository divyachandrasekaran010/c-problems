Hospital Patient Load Monitor

Problem Statement
Calculate total patients and count overcrowded days (&gt;100 patients).
Input Format
Integer N
N integers (patients per day)
Output Format
Total Patients
Overcrowded Days
Test Cases
Input
5
80 120 150 90 110

Output
Total Patients: 550
Overcrowded Days: 3
#include<stdio.h>
int main(){
    int i,n,patients,total=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&patients);
        total+=patients;
        if(patients>100){
            count++;
        }
    }
    printf("total patients:%d\n",total);
    printf("overcrowded days:%d",count);
    return 0;
}