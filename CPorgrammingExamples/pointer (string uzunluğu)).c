#include<stdio.h>
#include<stdlib.h>
int main(){
	char *cont,text[100];
	printf("enter text : ");
	gets(text);
	for(cont=text;*cont;cont++){
	}
	printf("%s lenght is %d",text,cont-text);
}
