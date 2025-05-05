/*
PROBLEM: Write a program that finds the largest and smallest element in an array of integers.
DATE: 04/05/2025
AUTHOR: SAHID ZACK
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE_ARR 5
int main(){
    int arr[SIZE_ARR];
    int largest;
    printf("Enter numbers: ");
    for(int i = 0; i < SIZE_ARR; i++){
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(int i = 0; i < SIZE_ARR; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}