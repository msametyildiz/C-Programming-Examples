#include<stdio.h>
#include<stdlib.h>
int main(){
	char *cont,text[100],rem;
	printf("enter text : ");
	gets(text);
	printf("which letter be removed ?");
	scanf("%c",&rem);
	for(cont=text;*cont;cont++){
		if(*cont!=rem){
			printf("%c",*cont);
		}
	}
	
}
