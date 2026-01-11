/*
 * Program: Reverse String / Words In-Place
 * Description: Reverses a string or the words in a sentence in-place,
 *              without using extra memory.
 */

#include <stdio.h>
#include <string.h>
int reverse(char *start, char *end)
{
    char temp;
    while(start < end)
    {
        temp = *start;
        *start  = *end;
        *end = temp;
        start++;
        end--;
    }
}
int reverseString(char *s)
{
    char *start = s;
    char *end = s;
    while(*end != '\0') end++;
    end--;

    reverse(s, end);/*
    while(start < end)
    {
        char temp = *start;
        *start  = *end;
        *end = temp;
        start++;
        end--;
    }*/
}

int reverseStringAdv(char *sadv)
{
    char *start = sadv;
    char *end = sadv;

    /* Reverse whole string */
    while(*end != '\0') end++;
    reverse(sadv,end-1);

    /* Reverse each string */
    start = sadv;

    while(*start != '\0')
    {
        char *word_start = start;

        while (*start != ' ' && *start != '\0')
            start++;

        reverse(word_start, start - 1);

        if (*start == ' ')
            start++;   // skip space 
    }
}
int main(void) {
    char str[20], strAdv[50];
    printf("\n Enter the string:");
    
    fgets(str,sizeof(str),stdin);

    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input for string 2.\\n");
        return 1;
    }
    str[strcspn(str, "\n")] = '\0';

    fgets(strAdv,sizeof(strAdv),stdin);
    if (fgets(strAdv, sizeof(strAdv), stdin) == NULL) {
        printf("Error reading input for string 2.\\n");
        return 1;
    }
    strAdv[strcspn(strAdv, "\n")] = '\0';

    /* REVERSE STRING */
    reverseString(str);
    printf("\n Reverse string: %s", str);



    /* ADVANCE REVERSE STRING */
    reverseStringAdv(strAdv);
    printf("\n Reverse string: %s", strAdv);

    return 0;
}

