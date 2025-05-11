/*
PROBLEM: Array Reversal
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = n-1; i >= 0 ; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}