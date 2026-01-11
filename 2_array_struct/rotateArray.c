/*
 * Program: Rotate Array (In-Place)
 * Description: Rotates an array of size n to the right by k positions
 *              in-place, without using extra storage.
 */

// To right rotate the array by k position(in place):
// 1. reverse the array once
// 2. reverse the first k elements
// 3. Then, reverse the remaining elements in the array
// k = k % n to handle k > n
#include <stdio.h>
int reverse(int *p, int start, int end)
{
    while(start < end)
    {
        int temp = *(p + start);
        *(p + start) = *(p + end);
        *(p + end) = temp;
        start ++;
        end --;
    }
}
int rotate(int *p, int n, int k)
{
    if(n == 0)
    {
        printf("\n No elements");
        return 0;
    }

    if( k == 0)
    {
        printf("\n No swifting position");

        return 0;
    }

    k = k % n; /* Handles k > n  wrapping boundaries */

    reverse(p, 0, n-1);
    reverse(p, 0, k - 1);
    reverse(p, k, n -1);
}
int main(void) {
    int n, k;
    printf("Enter the array size");
    scanf("%d", &n);
    int arr[n];
    printf("\n Enter the array elements");
    for(int i = 0; i < n; i++)
    {
        scanf("\n%d", &arr[i]);
    }
    printf("\n Enter the k (position to rotate)");
    scanf("%d", &k);
    rotate(arr, n, k);
    for(int i = 0; i < n; i++)
    {
        printf("\n%d", *(arr + i));
    }
    return 0;
}
