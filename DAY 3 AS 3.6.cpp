#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int len1, len2, i, j, freq1[MAX_SIZE], freq2[MAX_SIZE];

    printf("Enter first string: ");
    fgets(str1, MAX_SIZE, stdin);
    printf("Enter second string: ");
    fgets(str2, MAX_SIZE, stdin);

    len1 = strlen(str1) - 1; // excluding '\n'
    len2 = strlen(str2) - 1; // excluding '\n'

    if(len1 != len2)
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    memset(freq1, 0, sizeof(freq1)); // initializing all values to zero
    memset(freq2, 0, sizeof(freq2));

    for(i = 0; i < len1; i++)
    {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }

    for(i = 0; i < MAX_SIZE; i++)
    {
        if(freq1[i] != freq2[i])
        {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("%s and %s are anagrams.\n", str1, str2);

    return 0;
}

