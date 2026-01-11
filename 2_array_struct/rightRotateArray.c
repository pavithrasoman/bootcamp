//Rotate an Array - Clockwise or Right
#include <stdio.h>
int reverse (int arr[], int start, int last)
{
    while(start < last)
    {
        int temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
}

int rotateArray(int arr[], int n, int k)
{

    int first = 0, last = n - 1;

    k = k % n;

    reverse(arr, first, last);
    reverse(arr, first, k-1);
    reverse(arr, k, last);    
}

int main(void) {
    int n;
    printf("Enter the number of array elements:");
    scanf("%d", &n);

    int d;
    printf("\n Enter the rotation position:");
    scanf("%d", &d);

    int arr[n], i;
    printf("\n Enter the array elements:");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    rotateArray(arr, n , d);

    printf("\n rotated array elements:");

    for(i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}
