#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Ham dem so tu trong chuoi
int demSoTu(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (!isspace(str[i]) && inWord == 0) {
            inWord = 1;
            count++;
        } else if (isspace(str[i])) {
            inWord = 0;
        }
    }

    return count;
}

int main() {
    char str[] = "hello world";
    int soTu = demSoTu(str);

    printf("Output: %d\n", soTu);

    return 0;
}

