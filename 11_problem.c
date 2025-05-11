/*
PROBLEM: 1D array in C
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        sum += arr[i];
    }
    printf("%d", sum);
}