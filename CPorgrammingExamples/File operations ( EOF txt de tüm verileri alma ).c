															EOF KULLANIMI   ( BUTUN TXT VERÝLERÝNÝ ÇEKME)
#include<stdio.h>
int main() {
	FILE *dosya;
	char karakter;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		karakter=fgetc(dosya);
		while(karakter!=EOF){
			printf("%c",karakter); 
			karakter=fgetc(dosya);
		}
	}
	else{
		printf("bos ki..");
	}
	fclose(dosya);
	return 0;
}

