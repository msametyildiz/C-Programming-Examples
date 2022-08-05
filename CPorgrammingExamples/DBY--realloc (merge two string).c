#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int a=0,uad,usoy;
	char *ad=(char*)malloc(50*sizeof(char));
	char *soyad=(char*)malloc(50*sizeof(char));
	printf("Name : ");
	gets(ad);
	printf("Surname : ");
	gets(soyad);
	uad=strlen(ad);
	usoy=strlen(soyad);
	ad=(char*)realloc(ad,usoy*sizeof(char));
	for(int i=uad+1;i<uad+usoy+1;i++){
		*(ad+i)=*(soyad+a);
		a++;
	}
	for(int i=0;i<uad+usoy+1;i++){
		printf("%c",*(ad+i));
	}
	free(ad);
	free(soyad);
	return 0;
}


