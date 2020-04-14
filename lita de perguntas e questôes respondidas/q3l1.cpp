#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a,b,c,d,e,z,x,y;
	printf("digite os valoreas dos coeficientes a, b,c,  d , e, z para as formulas ax+by=c e dx+ey =z");
	scanf("%d %d %d %d %d ", &a,&b,&c,&d,&e,&z);
	for (x=-c;x<c;x++){
		for(y=-c;y<c;y++){
			if((a*x)+(b*y)==c){
				printf ("X= %d e Y= %d, satisfaz a primeira equacao \n",x,y);
			}
		}
	}
		for (x=-c;x<z;x++){
		for(y=-c;y<z;y++){
			if((d*x)+(e*y)==z){
				printf ("X= %d e Y= %d, satisfaz a segunda equacao \n",x,y);
			}
		}
	}
	return 0;
}
