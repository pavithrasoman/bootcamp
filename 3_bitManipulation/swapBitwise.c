// Swap two numbers using Bit Manipulation

#include <stdio.h>

int main(void) {
    int a, b;
    printf("/n Enter two numbers to swap A and B:");
    scanf(" %d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\n After swapping A = %d , B = %d", a, b);

    return 0;
}

