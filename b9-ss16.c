#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    char ch;
    int j = 0;

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}

