#include<stdio.h>
#include<math.h>
int main(){
	FILE *dosya;
	char text[20],satir[100],*karakter;
	printf("lutfen okumak istediginiz dosyanin dosya yolu ve ismini girin (orn: text.txt) : ");
	gets(text);
	if((dosya=fopen(text,"r"))!=NULL){
		karakter=fgets(satir,100,dosya);
		while(karakter!=NULL){
			printf("%s",karakter);
			karakter=fgets(satir,100,dosya);
		}
	}
	else{
		printf("basarisiz..");
	}
	return 0;
}
