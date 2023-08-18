#include <stdlib.h>
#include <stdio.h>

int lengthOfLastWord(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        if (*s != 32)
            len++;
        
        if (*s == 32 && *(s + 1) != 32 && *(s + 1) != '\0')
            len = 0;
        s++;
    }

    return len;
}

int main()
{
    char input[] = "Hello World Example  ";
    int result = lengthOfLastWord(input);
    printf("Length of last word: %d\n", result);
    return 0;
}


