#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int t, x;
    scanf("%d %d", &t, &x);
    getchar();
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        getchar();
        int board[11][11] = {0};
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                scanf("%d", &board[j][k]);
            }
        }
        int win;
        int count = 0;
        if (x == 3 && n == 3) {
            for (int j = 0; j < 3; j++) {
                if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
                    if (board[0][j] != 0) {
                        win = board[0][j];
                        count++;
                    }
                }
            }
            for (int j = 0; j < 3; j++) {
                if (board[j][0] == board[j][1] && board[j][1] == board[j][2]) {
                    if (board[j][0] != 0) {
                        win = board[j][0];
                        count++;
                    }
                }
            }
            if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
                (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
                if (board[1][1] != 0) {
                    win = board[1][1];
                    count++;
                }
            }
            if (count) {
                printf("%d\n", win);
            } else {
                printf("draw\n");
            }
        } else if (x == 4 && n == 4) {
            for (int j = 0; j < 4; j++) {
                if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == board[3][j]) {
                    if (board[0][j] != 0) {
                        win = board[0][j];
                        count++;
                    }
                }
            }
            for (int j = 0; j < 4; j++) {
                if (board[j][0] == board[j][1] && board[j][1] == board[j][2] && board[j][2] == board[j][3]) {
                    if (board[j][0] != 0) {
                        win = board[j][0];
                        count++;
                    }
                }
            }
            if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[3][3] == board[2][2]) {
                if (board[1][1] != 0) {
                    win = board[1][1];
                    count++;
                }
            }
            if (board[0][3] == board[1][2] && board[1][2] == board[2][1] && board[2][1] == board[3][0]) {
                if (board[1][2] != 0) {
                    win = board[1][2];
                    count++;
                }
            }
            if (count) {
                printf("%d\n", win);
            } else {
                printf("draw\n");
            }
        } else {
            int a[5] = {0};
            for (int j = 0; j < n; j++) {
                for (int m = 0; m < n - x + 1; m++) {
                    int sum = 0;
                    int pro = 1;
                    int lef = j;
                    int rig = m;
                    for (int k = 0; k < x; k++) {
                        sum += board[lef][rig];
                        pro *= board[lef][rig];
                        rig++;
                    }
                    if (sum == x && pro == 1) {
                        a[1]++;
                    } else if (sum == 2 * x&&pro==pow(2,x)) {
                        a[2]++;
                    } else if (sum == 4 * x&&pro==pow(4,x)) {
                        a[4]++;
                    } else { continue; }
                }
            }
            for (int j = 0; j < n; j++) {
                for (int m = 0; m < n - x + 1; m++) {
                    int sum = 0;
                    int pro=1;
                    int lef = m;
                    int rig = j;
                    for (int k = 0; k < x; k++) {
                        sum += board[lef][rig];
                        pro*=board[lef][rig];
                        lef++;
                    }
                    if (sum == x&&pro==1) {
                        a[1]++;
                    } else if (sum == 2 * x&&pro==pow(2,x)) {
                        a[2]++;
                    } else if (sum == 4 * x&&pro==pow(4,x)) {
                        a[4]++;
                    } else { continue; }
                }
            }
            for (int j = 0; j < n - x + 1; j++) {
                for (int m = 0; m < n - x + 1; m++) {
                    int sum = 0;
                    int pro=1;
                    int lef = j;
                    int rig = m;
                    for (int k = m; k < x + m; k++) {
                        sum += board[lef][rig];
                        pro*=board[lef][rig];
                        lef++;
                        rig++;
                    }
                    if (sum == x&&pro==1) {
                        a[1]++;
                    } else if (sum == 2 * x&&pro==pow(2,x)) {
                        a[2]++;
                    } else if (sum == 4 * x&&pro==pow(4,x)) {
                        a[4]++;
                    } else { continue; }
                }
            }
            for (int j = 0; j < n - x + 1; j++) {
                for (int m = 0; m < n - x + 1; m++) {
                    int sum = 0;
                    int pro=1;
                    int lef = j + x - 1;
                    int rig = m;
                    for (int k = 0; k < x; k++) {
                        sum += board[lef][rig];
                        pro*=board[lef][rig];
                        lef--;
                        rig++;
                    }
                    if (sum == x&&pro==1) {
                        a[1]++;
                    } else if (sum == 2 * x&&pro==pow(2,x)) {
                        a[2]++;
                    } else if (sum == 4 * x&&pro==pow(4,x)) {
                        a[4]++;
                    } else { continue; }
                }
            }
            for (int j = 0; j < 5; j++) {
                if (a[j] != 0) {
                    count++;
                    win = j;
                }
            }
            if (count == 1) {
                printf("%d\n", win);
            } else {
                printf("draw\n");
            }
        }
    }
    return 0;
}