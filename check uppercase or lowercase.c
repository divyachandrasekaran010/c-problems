Uppercase or Lowercase
Input: G
Output: Uppercase letter
Explanation: ASCII range A–Z → uppercase.



#include<stdio.h>
int main(){
    char ch;
    printf("Input:");
    scanf("%c",&ch);
    if (ch>='A'&&ch<='Z'){
        printf("UPPERCASE");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("lowercase");
    }
    else{
        printf("its not uppercase and lowercase");
    }
    return 0;
}