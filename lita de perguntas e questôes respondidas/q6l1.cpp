#include <stdio.h>
#include<stdlib.h>
int ord(char a[30], char b[30] ){
	int c;
		if ( a [0] < b[0]){
	c = 1;
} else if ( a [0] >b[0]){
	c=-1;
}else{
	c=0;
}
return c;
}
int main (){
	int  c;
	char a[30],b[30];
	scanf("%s %s",a ,b);
	ord(a,b);
	c=ord(a,b);
		printf("%d",c);
	
	
	return 0;
}
