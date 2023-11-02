#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);
    getchar();
    char str[100005] = {0};
    scanf("%s", str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        } else {
            continue;
        }
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}