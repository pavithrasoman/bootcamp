/*
 * Program: Find Second Largest Distinct Element
 * Description: Finds the second largest distinct element in an array of positive integers.
 *              Returns -1 if it does not exist.
 */

#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n)
{
    if(n < 2)
    {
        printf("\n There is no second largest");
        return -1;
    }

    int largest = INT_MIN, secLargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secLargest)
        {
            secLargest = arr[i];
        }
    }

    if(secLargest == INT_MIN)
    {
        printf("\n No second largest");
        return -1;
    }
    else
    {
        printf("\n second Largest element = %d", secLargest);
    }

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

    secondLargest(arr, n);

    return 0;
}

