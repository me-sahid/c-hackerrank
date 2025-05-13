/*
PROBLEM: Count UpperCase and LowerCase Characters(CodeChef)
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include <stdio.h>
#include<ctype.h>

int main() {
    char str[] = "ChefSaysHi";
    int countUpp = 0, countLow = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(isupper((unsigned char) str[i])){
            countUpp++;
        }
        else if(islower((unsigned char) str[i])){
            countLow++;
        }
    }
    printf("%d %d", countUpp, countLow);
    
    return 0;   
}