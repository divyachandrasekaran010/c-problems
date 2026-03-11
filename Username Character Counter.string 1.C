Username Character Counter

Input: Venky123
 Output: 8
 Explanation: 8 characters present.
Input: AI
 Output: 2
 Explanation: Two letters.
Input: ChatGPT_User
 Output: 12


#include<stdio.h>
int main(){
    char username[100];
    int count=0,i=0;
    scanf("%s",username);
    while(username[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
}