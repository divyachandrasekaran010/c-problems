 Most Frequent Value in Entire Matrix

Test Case
Input
 2 4
 1 2 3 2
 2 4 2 5
Output
 2
 
#include <stdio.h>
int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int maxFreq=0,value;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            int count=0;
            for(int x=0;x<R;x++)
                for(int y=0;y<C;y++)
                    if(a[i][j]==a[x][y])
                        count++;
            if(count>maxFreq){
                maxFreq=count;
                value=a[i][j];
            }
        }
    }
    printf("%d",value);
}
