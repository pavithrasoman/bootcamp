// Swap two variables without third
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the value of A and B");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = b ^ a;

    printf("\n Values of A and B after swaping: A = %d, B = %d", a, b);

    return 0;
}
