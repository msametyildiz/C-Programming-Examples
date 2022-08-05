#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *chr=(char*)calloc(100,sizeof(char));
	printf("enter text : ");
	gets(chr);
	for(int i=0;i<strlen(chr);i++){
		for(int j=0;j<strlen(chr);j++){
			if(i>=j){
				printf("%c ",*(chr+j));
			}
		}
		printf("\n");
	}
	free(chr);
	return 0;
}
