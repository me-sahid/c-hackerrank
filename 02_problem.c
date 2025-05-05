/*
PROBLEM: Write a program that finds the sum of all elements in an integer array.
DATE: 03/05/2025
AUTHOR: SAHID ZACK
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE_ARR 10

int main(){

   int arr[SIZE_ARR];
   int sum = 0;
   printf("Enter numbers: \n");
   for(int i = 0; i < SIZE_ARR; i++){
    scanf("%d", &arr[i]);
   }
   for(int i = 0; i < SIZE_ARR; i++){
    sum += arr[i];
   }
   printf("The sum of all elems are: %d", sum);
   return 0;

}
