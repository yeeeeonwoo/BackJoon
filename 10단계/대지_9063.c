#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, x1, y1, min_x1 = 10001, max_x1 = -10001, min_y1 = 10001, max_y1 = -10001;
    int x[100000], y[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1, &y1);
        x[i] = x1;
        if (x1 > max_x1) max_x1 = x1;
        if (x1 < min_x1) min_x1 = x1;
        y[i] = y1;
        if (y1 > max_y1) max_y1 = y1;
        if (y1 < min_y1) min_y1 = y1;
    }
    printf("%d", (max_x1 - min_x1) * (max_y1 - min_y1));
}
