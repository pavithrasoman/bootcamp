/*
 * Program: Turn Off Rightmost Set Bit
 * Description: Given an integer n, turns off the rightmost set bit
 *              and returns the resulting number.
 */
#include <stdio.h>

int main(void) {
    int n;
    printf("\n Enter the number:");
    scanf("%d", &n);
    n = n & (n -1);
    printf("\n After clearing rightmost set bit: %d", n);
    return 0;
}

