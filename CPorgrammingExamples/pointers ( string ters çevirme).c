#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100],*strr;
	int lengh,i;
	printf("enter text : ");
	gets(str);
	lengh=strlen(str);
	strr=str;
	while(lengh>=0){
		printf("%c",*(strr+lengh));
		lengh--;
	}
	return 0;
}
