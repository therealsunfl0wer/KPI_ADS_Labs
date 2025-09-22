#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    char *invalidValue = "The entered value of x does not fall within the domain specified for this part of the equation\n\0";

    printf("Input x: ");
    scanf("%d", &x);

    if (x >= -49) {
        if (x < -10) {
            y = 10 * (x*x*x) + (7 * x / 5) + 2;
            printf("1. y(%d) = %d for y = 10x^3 + 7x/5 + 2, x ∈ [-49,-10) U (0,10]\n", x, y);
        } else if (x > 0) {
            if (x <= 10) {
                y = 10 * (x*x*x) + (7 * x / 5) + 2;
                printf("1. y(%d) = %d for y = 10x^3 + 7x/5 + 2, x ∈ [-49,-10) U (0,10]\n", x, y);
            } else {
                printf("1.");
                printf(invalidValue);
            }
        } else {
            printf("1.");
            printf(invalidValue);
        }
    } else {
        printf("1.");
        printf(invalidValue);
    }

    if (x > 20)
    {
        y = -x + 9;
        printf("2. y(%d) = %d for y = -x + 9, x ∈ (20, + ∞)\n", x, y);
    }
    else
    {
        printf("2.");
        printf(invalidValue);
    }
    
    return 0;
}
