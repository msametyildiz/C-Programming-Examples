#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *chr=(char*)malloc(100*sizeof(char));
	printf("enter text : ");
	gets(chr);
	for(int i=strlen(chr)-1;i>=0;i--){
		printf("%c",*(chr+i));
	}
	free(chr);
	return 0;
}
