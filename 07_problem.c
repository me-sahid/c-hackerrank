#include<stdio.h>
#include<stdlib.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0, maxOR = 0; int maxXOR = 0;
    for(int a = 1; a < n; a++){
        for(int b = a + 1; b <= n; b++){
            int and = a & b;
            int or = a | b;
            int xor = a ^ b;

            if(and < k && and > maxAnd) maxAnd = and;
            if(or < k  && or > maxOR) maxOR = or;
            if(xor < k && xor > maxXOR) maxXOR = xor;
        }
    }
    printf("%d\n%d\n%d\n", maxAnd, maxOR, maxXOR);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
