/*
PROBLEM: Take 5 integer as input and store them in an array, then print the array elements in reverse order
DATE: 03/05/2025
AUTHOR: SAHID ZACK
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[5];
    printf("Enter any 5 numbers\n");
    for(int i = 0; i < 5; i++){
        printf("Enter any five %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++){
        printf("%d = %d \n",i, arr[i]);
    }
    printf("\n");
    for(int i = 4; i >= 0; i--){
        printf("%d = %d \n",i, arr[i]);
    }
    



}