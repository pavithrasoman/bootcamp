/*
 * Program: Sum Without + or - Operators
 * Description: Computes the sum of two integers without using
 *              the '+' or '-' operators, using bitwise operations.
 */
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the value of A and B");
    scanf("%d %d", &a, &b);

    while(b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    printf("\n sum = %d", a);

    return 0;
}
