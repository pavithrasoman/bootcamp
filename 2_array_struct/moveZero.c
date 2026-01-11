/*
 * Program: Move Zeros to End
 * Description: Rearranges an array so that all zeros are moved to the end,
 *              while maintaining the order of non-zero elements.
 */

#include <stdio.h>

int findZero(int arr[], int n)
{
    int writeIndex = 0, i = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }

    while(writeIndex < n)
    {
        arr[writeIndex] = 0;
        writeIndex++;
    }

    printf("\n final array element:");
    for(i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
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

    findZero(arr, n);

    return 0;
}

