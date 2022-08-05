#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *dosya1,*dosya2,*birlesim;
	char karakter;
	dosya1=fopen("deneme2.txt","r");
	if(dosya1==NULL){
		printf("islem basarisiz..");
		exit(1);
	}
	dosya2=fopen("deneme3.txt","r");
	if(dosya2==NULL){
		printf("islem basarisiz..");
		exit(1);
	}
	birlesim=fopen("deneme.txt","w");
	if(birlesim==NULL){
		printf("islem basarisiz..");
		exit(1);
	}
	printf("dosya 1 aktariliyor...\n");
	for(karakter=fgetc(dosya1);karakter!=EOF;karakter=fgetc(dosya1)){
		putc(karakter,birlesim);
	}
	fprintf(birlesim,"\n");
	printf("dosya 2 aktariliyor...\n");
	for(karakter=fgetc(dosya2);karakter!=EOF;karakter=fgetc(dosya2)){
		putc(karakter,birlesim);
	}
	printf("\nislem basarili....\n");
	fclose(dosya1);
	fclose(dosya2);
	fclose(birlesim);
	return 0;
}
