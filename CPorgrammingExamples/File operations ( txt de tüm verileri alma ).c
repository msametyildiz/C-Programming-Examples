#include<stdio.h>
int main(){
	FILE *dosya;
	char arr[50][20];
	char karakter;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		karakter=fgetc(dosya);
		while(karakter!=EOF){
			printf("%c",karakter);
			karakter=fgetc(dosya);
		}
	}
	fclose(dosya);
	return 0;
}
--------------------------------------
													bastýrma( printf- putchar kýsmý farklý)
 #include<stdio.h>
int main(){
	FILE *dosya;
	char arr[50][20];
	char karakter;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		do{
			karakter=fgetc(dosya);
			if(karakter!=EOF){
				putchar(karakter);
			}
		}while(karakter!=EOF);
	}
	fclose(dosya);
	return 0;
}
-----------------------------------
											#include<stdio.h>
int main(){
	FILE *dosya;
	char satir[100],*karakter;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		do{
			karakter=fgets(satir,100,dosya);
			if(karakter!=NULL){
				printf("%s",satir);
			}
		}while(karakter!=NULL);
	}
	fclose(dosya);
	return 0;
}


 
