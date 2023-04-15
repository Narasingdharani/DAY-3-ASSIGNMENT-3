#include <stdio.h>
#include <string.h>

void reverse_string(char *);

int main() {
    char string[100];

    printf("Enter any String :: ");
    scanf("%s", string);

    reverse_string(string);

    printf("The Reverse of the String [ %s ] is ::  %s\n", string, string);

    return 0;
}

void reverse_string(char *str) {
    int length = strlen(str);
    char *start, *end, temp;

    // Initialize pointers
    start = str;
    end = str + length - 1;

    // Reverse string using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

