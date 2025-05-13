/*
PROBLEM: Count UpperCase and LowerCase Characters(CodeChef)
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char str[] = "ChefSaysHi";
    int len = strlen(str);
    int countUp = 0, countLow = 0;
    for(int i = 0; i < len; i++){
        if(isupper((unsigned char)str[i])){
            countUp++;
        }
        else if(islower((unsigned char)str[i])){
            countLow++;
        }
    }
    printf("%d %d", countUp,countLow);
    return 0;
}
