#include<stdio.h>
int main() {
	FILE *dosya;
	char kelime[50][20];
	int i=0;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		while(!feof(dosya)){
			fscanf(dosya,"%s",&kelime[i]);
			printf("%s ",kelime[i]);
			i++;
		}
	}
	else{
		printf("yanlis secim...");
	}
	fclose(dosya);
	return 0;
}
