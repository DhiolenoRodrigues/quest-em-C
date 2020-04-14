#include <stdio.h>
#include<stdlib.h>

int main (){
	int cont =0;
	char a[30];
	scanf("%s",a);
	int aux;
	
	int i=0;
	while(a[i]!='\0'){
		cont = cont +1;
		i++;
	}
	for (i=0;i<cont;i++){
		if(cont > i){
		aux=a[i];
		a[i]=a[cont-1];
		a[cont-1]=aux;	
		}
    	cont --;	
	}
	
	printf("%s",a);
	return 0;
}
