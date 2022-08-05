#include<stdio.h>
int main(){
	FILE *dosya;
	char text[100];
	if((dosya=fopen("deneme2.txt","a"))!=NULL){
		printf("text e yuklemek istediginiz metni yazinin: ");
		gets(text);
		fprintf(dosya,"\n\n");
		for(int i=0;text[i];i++){
			
			putc(text[i],dosya);
		}
		printf("dosya yuklendi..");
	}
	else{
		printf("basarisiz....");
	}
	return 0;
