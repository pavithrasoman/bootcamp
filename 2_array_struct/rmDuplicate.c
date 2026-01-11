/*
 * Program: Remove Duplicate Characters from String
 * Description: Removes all duplicate characters from a string while
 *              preserving the order of first occurrences.
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void removeDuplicates(char str[])
{
    bool visited[256] = {false};  // ASCII characters
    int writeIndex = 0;

    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++)
    {
        char c = str[readIndex];
        if (!visited[(unsigned char)c])
        {
            visited[(unsigned char)c] = true;
            str[writeIndex] = c;
            writeIndex++;
        }
        // else: duplicate, skip
    }

    str[writeIndex] = '\0'; // null-terminate the resulting string
}

int main()
{
    char str[50];

    printf("\n Enter the string: ");
    fgets(str, sizeof(str),stdin);
    removeDuplicates(str);
    printf("%s\n", str);  // Output: geksfor

    return 0;
}
