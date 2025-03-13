#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, pt, at;

    a= 3;
    b= 4;
    pt = a + b + sqrt ( pow (b, 2) + pow (a, 2));
    at= b*a/2;

    printf("el area total es %f\n", at);
    printf("el perimetro total es %f\n", pt);

    return 0;
}
