/*
 * Program: Find Missing Element in Permutation Array
 * Description: Finds the single missing element in an array containing
 *              a permutation of integers from 1 to n.
 */

#include <stdio.h>
int findMissElement(int arr[], int n)
{
    int expectedSum = 0, actualSum = 0;

    for(int i = 1; i <= n + 1; i++)
    {
        expectedSum ^= i;
    }

    for(int i = 0; i < n; i ++)
    {
        actualSum ^= arr[i];
    }

    printf("\n Missing element : %d", (expectedSum ^ actualSum));

    return 0;
}
int main(void) {
    int n;
    printf("\n Enter the no. of array elements:");
    scanf("%d",&n);
    int arr[n], i;
    printf("\n Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findMissElement(arr, n);

    return 0;
}
