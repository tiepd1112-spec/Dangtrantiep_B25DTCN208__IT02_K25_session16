#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int i;

    printf("Chuoi dao nguoc la: ");
    for (i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}

