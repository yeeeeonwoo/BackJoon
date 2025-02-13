#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long long n; //n^2는 약 범위가 2500억이므로 int범위넘어감(int범위: -21억~21억)
    scanf("%lld", &n);
    printf("%lld\n", n*n*n); //시간복잡도는 n*n*n
    printf("3"); // O(n*n*n)이므로 3
}
