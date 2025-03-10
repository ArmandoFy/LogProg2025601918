#include <stdio.h>
#include <math.h>

int main()
{

	float l, at, pt, h;
	l=7;
	h= sqrt ((pow)(7,2) + pow (21,2));

	at= (3.1416*(10.5*10.5))/2 + l*(3*l) * 3;
	pt= (21*3.1416)/2 + h*2 + 7*l;

	printf("el area total es:%f\n", at);
	printf("el perimetro total es:%f\n",pt);

	return 0;

}
