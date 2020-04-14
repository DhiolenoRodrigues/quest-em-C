#include <stdio.h>
#include <stdlib.h>
#define pi 3,14159265359

int main(){
	float raio=0,altura=0;
	float al=0, ab=0 ,v=0;
	printf("dite a altura e o raio");
	scanf ("%f %f",&altura , &raio);
	al= (2*pi)*raio ;
	printf("area lateral=%.2f",al);
	ab = pi* (raio*raio);
	printf("area da base=%.2f",ab);
	v= ab*altura;
	printf("volume=%.2f",v);
	return 0;
}
