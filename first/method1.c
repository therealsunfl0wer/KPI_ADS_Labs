#include <stdio.h>

int main()
{
    int x, y;
    char *invalidValue = "The entered value of x does not fall within the domain specified for this equation\n\0";

    printf("Input x: ");
    scanf("%d", &x);

    if (x >= -49) {
        if (x < -10) {
            y = 10 * (x*x*x) + (7 * x / 5) + 2;
            printf("y(%d) = %d for y = 10x^3 + 7x/5 + 2\n", x, y);
        } else if (x > 0) {
            if (x <= 10) {
                y = 10 * (x*x*x) + (7 * x / 5) + 2;
                printf("y(%d) = %d for y = 10x^3 + 7x/5 + 2\n", x, y);
            } else {
                    if (x > 20) {
                            y = -x + 9;
                            printf("y(%d) = %d for y = -x + 9\n", x, y);
                        } else {
                            printf(invalidValue);
                        }
                printf(invalidValue);
            }
        } else {
            printf(invalidValue);
        }
    } else {
        printf(invalidValue);
    }
    
    return 0;
}
