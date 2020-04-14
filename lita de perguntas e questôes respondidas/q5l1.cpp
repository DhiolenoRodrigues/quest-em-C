#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int chave(int a){
	int b =a+1;
return b;	
}
int main(){
	int a=0;
	int b;

	while(b!=2){
	printf("digite 1 para gerar nova senha digite 2 para sair");
	scanf("%d",&b);
	a=chave(a);
	printf("senha = %d \n",a);
	
}
	
	
	return 0;
}
