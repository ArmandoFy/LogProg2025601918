#include <stdio.h>

int main()
{
    float x = 3;

    float A = (1 / 2.0) * x;
    float B = (3 + x) / 2.0;
    float C = 2 * x * x;
    float D = (2 + 3) * x;

    float res = (A + B * C) / D;

    printf("El resultado es: %f \n", res);

    return 0;
}
