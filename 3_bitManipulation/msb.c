// Find MSB
#include <stdio.h>

int main(void) {
    int n, pos = 0;
    printf("\n Enter the number: ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("All zero");
        return 0;
    }

    while(n != 0)
    {
        n = n >> 1;
        pos++;
    }
    printf("\n Output: %d", pos);

    return 0;
}
