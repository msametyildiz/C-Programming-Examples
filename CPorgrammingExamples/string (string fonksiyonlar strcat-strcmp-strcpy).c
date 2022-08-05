// 										strcopy-strncpy
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char chr[100];
	char chr2[100];
	char chr3[100]="";
	printf("1.");
	gets(chr);
	printf("2.");
	gets(chr2);
	strcpy(chr3,chr);
	strncpy(chr3+2,chr2,5);
	printf("%s",chr3);
	return 0;
}
//										strcat-strncat
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char chr[100];
	char chr2[100];
	char chr3[100]="";
	printf("1.");
	gets(chr);
	printf("2.");
	gets(chr2);
	strcat(chr3,chr);
	strncat(chr3,chr2,5);
	printf("%s",chr3);
	return 0;
}
//									strcmp-strncmp
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char chr[100];
	char chr2[100];
	printf("1.");
	gets(chr);
	printf("2.");
	gets(chr2);
	printf("%d",strcmp(chr,chr2));
	return 0;
}

