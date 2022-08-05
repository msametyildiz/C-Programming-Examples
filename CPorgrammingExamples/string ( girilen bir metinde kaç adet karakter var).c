// 														string ( girilen bir metinde kaç adet karakter var)
#include<stdio.h>
#include<string.h>
int main(){
	int i=0,counter=1;
	char text[100];
	printf("enter text:  ");
	gets(text);
	printf("There are %d character in the text",strlen(text));
	return 0;
}

