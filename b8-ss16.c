#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "hello world";
    int n = strlen(str);

    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    for (int i = 1; i < n; i++) {
        if (isspace(str[i-1]) && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}

