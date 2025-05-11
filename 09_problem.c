/*
PROBLEM: For loops in C
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b;
    char words[10][10] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n %d", &a, &b);
    for(int n = a; n <= b; n++){
        if(n >= 0 && n <= 9) printf("%s\n", words[n]);
        else if(n % 2 == 0) printf("even\n");
        else printf("odd\n");
    }

}