Find minimum voltage and count low-voltage events (<210V).
Input
5
220 205 215 200 230
Output
Minimum Voltage: 200
Low Voltage Events: 2

#include<stdio.h>
int main(){
    int n, voltage, i;
    int min, count = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &voltage);

        if(i == 0){
            min = voltage;   // first value set as min
        }

        if(voltage < min){
            min = voltage;
        }

        if(voltage < 210){
            count++;
        }
    }

    printf("Minimum Voltage: %d\n", min);
    printf("Low Voltage Events: %d", count);

    return 0;
}
