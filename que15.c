#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int count[26] = {0}; // initialize all counts to 0

    for (int i = 0; str[i]; i++) {
        char ch = tolower(str[i]); // convert to lowercase
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++; // increment count for this alphabet
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", i + 'a', count[i]);
    }

    return 0;
}