/*
PROBLEM: Write a C program which uses a single string variable to print
         Hello
         CodeChef!(CodeChef)
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[] = "Hello World!";
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] == ' '){
            s[i] = '\n';
        }
    }
    printf("%s", s);
    return 0;
}