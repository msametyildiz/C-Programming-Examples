#include<stdio.h>
#include<stdliba.h>
int main(){
	FILE *giris,*cikis;
	char kaynak[50],hedef[50],karakter;
	printf("lutfen yedeklenecek dosyanin adini ve uzantisini yaziniz : (orn: text.txt)");
	gets(kaynak);
	giris=fopen(kaynak,"r");
	if(giris==NULL){
		printf("dosya bulunamadi ....");
		exit(1);
	}
	printf("lutfen yedekleyeceginiz dosyanin adini ve uzantisini yaziniz : (orn: text.txt)");
	gets(hedef);
	cikis=fopen(hedef,"w");
	if(cikis==NULL){
		printf("dosya olusturulamadi..");
		exit(1);
	}
	for(karakter=fgetc(giris);karakter!=EOF;karakter=fgetc(giris)){
		putc(karakter,cikis);
	}
	printf("yedekleme islemi tamamlandi ...");
	fclose(giris);
	fclose(cikis);
	return 0;
}
 
 
