#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char subject[51], grade[3];
    double num, sum = 0.0, subject_num = 0.0;
    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subject, &num, grade);
        if (grade[0] == 'P') continue;

        subject_num += num;
        if (grade[0] == 'A') {
            if (grade[1] == '+') {
                sum += num * 4.5;
            }
            else if (grade[1] == '0') {
                sum += num * 4.0;
            }
        }
        else if (grade[0] == 'B') {
            if (grade[1] == '+') {
                sum += num * 3.5;
            }
            else if (grade[1] == '0') {
                sum += num * 3.0;
            }
        }
        else if (grade[0] == 'C') {
            if (grade[1] == '+') {
                sum += num * 2.5;
            }
            else if (grade[1] == '0') {
                sum += num * 2.0;
            }
        }
        else if (grade[0] == 'D') {
            if (grade[1] == '+') {
                sum += num * 1.5;
            }
            else if (grade[1] == '0') {
                sum += num * 1.0;
            }
        }
    }
    printf("%f", sum / subject_num);
}
