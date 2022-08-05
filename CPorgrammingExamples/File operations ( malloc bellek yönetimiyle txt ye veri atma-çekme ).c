#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *dosya;
	int i,n,a=0,b=0;
	printf("bir sayi giriniz : ");
	scanf("%d",&n);
	int *tek=(int*)malloc(a*sizeof(int));
	int *cift=(int*)malloc(b*sizeof(int));
	if((dosya=fopen("deneme2.txt","w"))!=NULL){
		for(i=0;i<=n;i++){
			if(i%2==0){
				cift=(int*)realloc(cift,(a+1)*sizeof(int));
				*(cift+a)=i;
				a++;
			}
			else{
				tek=(int*)realloc(tek,(b+1)*sizeof(int));
				*(tek+b)=i;
				b++;
			}
		}
		fprintf(dosya,"Ciftler;\n");
		for(i=0;i<a;i++){
			fprintf(dosya,"%4d",*(cift+i));
		}
		fprintf(dosya,"\nTekler;\n");
		for(i=0;i<b;i++){
			fprintf(dosya,"%4d",*(tek+i));
		}
	}
	else{
		printf("basarisiz..");
	}
	fclose(dosya);
	char karakter;
	if((dosya=fopen("deneme2.txt","r"))!=NULL){
		karakter=fgetc(dosya);
		while(karakter!=EOF){
			printf("%c",karakter);
			karakter=fgetc(dosya);
		}
	}
	return 0;
}

 
