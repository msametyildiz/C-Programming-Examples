//												string ( 'strlen' fonk. karakter sayisini bulma )
#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	int b;
	printf("lutfen bir text girin: ");
	gets(text);
	b=strlen(text);
	printf("%d",b);
	return 0;
}
