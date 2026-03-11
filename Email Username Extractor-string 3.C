Email Username Extractor

Test Cases
Input: venky@gmail.com
 Output: venky
 Explanation: Before @.
Input: user123@yahoo.com
 Output: user123
Input: admin@company.org
 Output: admin

#include<stdio.h>
int main(){
    char email[100];
    int i=0;
    scanf("%s",email);
    while(email[i]!='@'&& email[i]!='\0'){
        printf("%c",email[i]);
        i++;
    }
    return 0;
}