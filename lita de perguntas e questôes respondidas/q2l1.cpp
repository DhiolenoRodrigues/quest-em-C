#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c, d, x1, x2 ;
	printf("digite o valor de a b c");
	scanf ("%f %f %f",&a, &b, &b);
	d= pow(b,2)-4*a*c;
	x1 = (-b + sqrt(d))/ 2 * a;
	x2 = (-b - sqrt(d))/ 2 * a;
	
	printf ("valor de DELTA=%.2f",d);
	printf("valores de x1 e x2 repsctivos= %.2f %.2f",x1,x2);
	return 0;
}
