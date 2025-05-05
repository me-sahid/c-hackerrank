/*
PROBLEM: Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum.
DATE: 05/05/2025
AUTHOR: SAHID ZACK
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int intARR[2];
    int inOut = 0;
    float j[2];
    for(int i = 0; i < 2; i++){
        scanf("%d", &intARR[i]);
    }
    for(int i = 0; i < 2; i++){
        scanf("%f", &j[i]);
    }    
    int sum = intARR[0] + intARR[1];
    int diff = intARR[0] - intARR[1];
    printf("%d %d\n", sum, diff);
    float sumFl = j[0] + j[1];
    float diffFl = j[0] - j[1];
    printf("%.1f %.1f", sumFl, diffFl);

    return 0;        
}