#include <stdio.h>
#include<stdlib.h>

int main (){
	int cont =0;
	char a[30];
	scanf("%[^\n]s",a);
	
	int i;
	for(i=0; i< 30 ;i++){
	  if(a[i]== 'a'||a[i]== 'e'||a[i]== 'i'||a[i]== 'o'||a[i]== 'u'){
	  	cont ++;
	  }
	}
	printf("a palavra tem %d vogais",cont);
	return 0;
}
