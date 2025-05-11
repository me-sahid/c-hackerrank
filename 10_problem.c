/*
PROBLEM: Sum of Digits of a Five Digit Number.
DATE: 11/05/2025
AUTHOR: SAHID ZACK
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int remainder;
    int sum = 0;
    scanf("%d", &n);
    while(n > 0){
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
