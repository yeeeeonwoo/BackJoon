#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    int a1, a2, a3;
    int b1, b2, b3;

    scanf("%d", &a);
    scanf("%d", &b);

    a1 = (a / 100) * 100; //400
    a2 = ((a % 100) / 10) * 10; //70
    a3 = a % 10;

    b1 = (b / 100) * 100; //300
    b2 = ((b % 100) / 10) * 10; //80
    b3 = (b % 10); //5

    c = a1 * b3 + a2 * b3 + a3 * b3;
    printf("%d\n", c);
    d = a1 * b2 + a2 * b2 + a3 * b2;
    printf("%d\n", d/10);
    e = a1 * b1 + a2 * b1 + a3 * b1;
    printf("%d\n", e/100);
    f = c + d + e;
    printf("%d\n", f);
}
