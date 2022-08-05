//															string ( girilen cümledeki kelimelri alt alta yazdirma)
#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	int i=0;
	printf("lutfen bir text girin: ");
	gets(text);
	while(text[i]){
		printf("%c",text[i]);
		if(text[i]==32){
			printf("\n");
		}
		i++;
	}
	return 0;
}
