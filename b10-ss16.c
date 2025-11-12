#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[] = "bcdac";
    int n = strlen(str);
    int count;
    bool counted[256] = {false};

    for (int i = 0; i < n; i++) {
        if (!counted[(unsigned char)str[i]]) {
            count = 1;
            for (int j = i + 1; j < n; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            counted[(unsigned char)str[i]] = true;
            printf("%c: %d\n", str[i], count);
        }
    }

    return 0;
}

