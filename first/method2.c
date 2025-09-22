#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *invalidValue = "Задане значення x не підпадає під ОДЗ задану у частині рівняння\n\0";
    int x, y;
    printf("Введіть x: ");
    scanf("%d", &x);
    if ((-49 <= x && x < -10) || (0 < x && x <= 10)) {
        y = 10 * (x*x*x) + (7 * x / 5) + 2;
        printf("1. y(%d) = %d для y = 10x^3 + 7x/5 + 2, x ∈ [-49,-10) U (0,10]\n", x, y);
    }
    else
    {
        printf("1.");
        printf(invalidValue);
    }

    if (x > 20)
    {
        y = -x + 9;
        printf("2. y(%d) = %d для y = -x + 9, x ∈ (20, + ∞)\n", x, y);
    }
    else
    {
        printf("2.");
        printf(invalidValue);
    }

    return 0;
}
