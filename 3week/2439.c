#include <stdio.h>

int main()
{
    int a;
    scanf_s("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
            printf("*");

        printf("\n");
    }

    return 0;
}
