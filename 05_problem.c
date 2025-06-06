/*
PROBLEM: Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
DATE: 05/05/2025
AUTHOR: SAHID ZACK
*/
#include<stdio.h>
#include<stdlib.h>

int max_of_four(int a, int b, int c, int d){
    int max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;
}
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
