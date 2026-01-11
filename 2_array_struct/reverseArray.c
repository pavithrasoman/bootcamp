/*
 * Program: Reverse Array In-Place
 * Description: Reverses the elements of an array without using extra memory.
 */

#include <stdio.h>
int reverseArray(int arr[], int n)
{
    int start = 0, last = n-1;
    if(n == 0)
    {
        printf("\n no elements");
    }
    while(start < last)
    {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
    return 0;
}
int main(void) {
    int n;
    scanf("%d\n", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    reverseArray(arr, n);

    printf("\n Reverse array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    
    return 0;
}

