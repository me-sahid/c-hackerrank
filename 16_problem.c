/*
PROBLEM: Swap two numbers using Pointers.
DATE: 15/05/2025
AUTHOR: SAHID ZACK
*/

#include<stdio.h>
#include<stdlib.h>


void swapNum(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main(){
    int a = 5; int b = 10;
    printf("a = %d, b = %d\n", a,b);
    swapNum(&a,&b);
    printf("a = %d, b = %d", a,b);
    return 0;
}