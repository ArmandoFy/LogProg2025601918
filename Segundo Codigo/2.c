#include <stdio.h>
#include <math.h>

int main ()
{
    float l, at, pt, ac, pc;
    l=7;
    pc=l/5;
    ac=pc*pc;
    at=(3.1416*(3.5*3.5)) /2+l*l+ac*8;
    pt=(l*3.1416) /2+pc*23;

    printf("el perimetro total es:%f\n", pt);
    printf("el area total es:%f\n", at);

    return 0;
}
