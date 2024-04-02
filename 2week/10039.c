#include <stdio.h>

int main() {
    int total, score1, score2, score3, score4, score5;
    scanf_s("%d", &score1);
    scanf_s("%d", &score2);
    scanf_s("%d", &score3);
    scanf_s("%d", &score4);
    scanf_s("%d", &score5);
    if (score1 < 40) {
        score1 = 40;
    }
    if (score2 < 40) {
        score2 = 40;
    }
    if (score3 < 40) {
        score3 = 40;
    }
    if (score4 < 40) {
        score4 = 40;
    }
    if (score5 < 40) {
        score5 = 40;
    }
    total = (score1 + score2 + score3 + score4 + score5);
    printf("%d\n", total / 5);

    return 0;
}