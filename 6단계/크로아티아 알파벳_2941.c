#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int cnt = 0;
    char word[101];
    scanf("%s", word);
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        cnt++;
        if (word[i] == '=') {
            if (word[i - 1] == 'c' || word[i - 1] == 's') {
                cnt--;
            }
            if (word[i - 1] == 'z') {
                cnt--;

                if (word[i - 2] == 'd') {
                    cnt--;
                }
            }
        }

        if (word[i] == '-') {
            if (word[i - 1] == 'c' || word[i - 1] == 'd') {
                cnt--;
            }
        }

        if (word[i] == 'j') {
            if (word[i - 1] == 'l' || word[i - 1] == 'n') {
                cnt--;
            }
        }
    }

    printf("%d", cnt);
}
