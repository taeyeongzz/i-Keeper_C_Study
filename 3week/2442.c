#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);

    for (int i = 0; i < a; i++) {

        for (int j = 0; j < a - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");

    }
    return 0;
}
