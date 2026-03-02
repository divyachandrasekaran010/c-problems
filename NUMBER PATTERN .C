NUMBER PATTERN 

4444444
4333334
4322234
4321234
4322234
4333334
4444444

#include <stdio.h>
int main()
{
    int n=4;
    int i,j;
    for(i=-n+1;i<n;i++){
        for(j=-n+1;j<n;j++){
            int x=i>=0 ? i:-i;
            int y=j>=0 ? j:-j;
            
            int max=x>y ? x:y;
            printf("%d",max+1);
        }
        printf("\n");
    }

    return 0;
}