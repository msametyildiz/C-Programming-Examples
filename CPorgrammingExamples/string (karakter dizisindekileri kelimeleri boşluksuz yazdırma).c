// 													string (karakter dizisindekileri kelimeleri boþluksuz yazdýrma)
#include<stdio.h>
#include<string.h>
void boslukkaldir(char dizi[100]){
	int i=0,j=0;
	char yenidizi[100];
	for(i=0;dizi[i];i++){
		if(dizi[i]!=' '){
			yenidizi[j]=dizi[i];
			j++;
		}
	}
	yenidizi[j]='\0';
	for(i=0;yenidizi[i]!='\0';i++){
		printf("%c",yenidizi[i]);
	}
}
int main(){
	char c,dizi[100];
	printf("lutfen bir text girin: ");
	gets(dizi);
	printf("%d adet karakter vardir.\n\n",strlen(dizi));
	boslukkaldir(dizi);
	return 0;
}
