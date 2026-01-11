/*
 * Program: Find Single Element in Array
 * Description: Finds the element that occurs only once in an array
 *              where all other elements appear exactly twice.
 */

#include <stdio.h>

int main(void) {
    int n;
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the elements of array:");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = 0;

    for(int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }

    printf("\n Result: %d", result);

    return 0;
}
