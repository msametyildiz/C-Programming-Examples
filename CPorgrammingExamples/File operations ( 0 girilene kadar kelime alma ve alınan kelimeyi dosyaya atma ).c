#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *dosya;
	int n;
	char chr[20];
	if((dosya=fopen("deneme.txt","w"))!=NULL){
		printf("lutfen sayi girin (bitirmek icin 0 giriniz ) : ");
		scanf("%d",&n);
		do{
			printf("lutfen bir kelime giriniz : ");
			fflush(stdin);
			gets(chr);
			fprintf(dosya," %s",chr);
			printf("lutfen sayi girin (bitirmek icin 0 giriniz ) : ");
			scanf("%d",&n);
		}while(n!=0);
		printf("\nveri aktarimi basarili bir sekilde saglandi...");
	}
	fclose(dosya);
	return 0;
}
