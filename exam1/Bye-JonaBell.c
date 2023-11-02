#include <stdio.h>

int main() {
    int n, k, b, l;
    scanf("%d %d %d %d", &n, &k, &b, &l);
    int group[1500] = {0};
    for (int i = 0; i < n; i++) {
        group[i] = l;
    }
    int num = b;
    int count = 1;
    while (1) {
        int a = 0;
        for (int i = 0; i < n; i++) {
            if (group[i] != 0) {
                if (count % k == 0) {
                    if (num > 0) {
                        group[i]--;
                        num--;
                        count++;
                    } else {
                        num = b;
                        count++;
                    }
                } else {
                    count++;
                }
            } else {
                continue;
            }
        }
        int c;
        for (int i = 0; i < n; i++) {
            if (group[i] != 0) {
                a++;
                c = i + 1;
            }
        }
        if (a == 1) {
            printf("%d", c);
            break;
        }
    }
    return 0;
}