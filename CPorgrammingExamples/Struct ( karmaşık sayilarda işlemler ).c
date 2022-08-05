#include<stdio.h>
#include<stdlib.h>
struct karmasiksayi{
	float a,b;
};
int main(){
	struct karmasiksayi birinci,ikinci,sonuc;
	char oper;
	printf("lutfen islem turunu giriniz ( + - ) : ");
	scanf("%c",&oper);
	printf("lutfen bir karmasik sayi giriniz: ");
	scanf("%f%f",&birinci.a,&birinci.b);
	printf("lutfen bir karmasik sayi daha giriniz: ");
	scanf("%f%f",&ikinci.a,&ikinci.b);
	if(oper=='+'){
		sonuc.a=birinci.a+ikinci.a;
		sonuc.b=birinci.b+ikinci.b;
	}
	else if(oper=='-'){
		sonuc.a=birinci.a-ikinci.a;
		sonuc.b=birinci.b-ikinci.b;
	}
	else {
		printf("yanlis secim .... ");
	}
	
	printf("SONUC : \n");
	printf("%.1f ",sonuc.a);
	if(sonuc.b>=0){
		printf("+ %.1fi",sonuc.b);
	}
	else{
		printf("%.1f i",sonuc.b);
	}
	return 0;
}
TYPDEF LÝ ÇÖZÜM
---------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	float a,b;
}karmasiksayi;
int main(){
	karmasiksayi birinci,ikinci,sonuc;
	char oper;
	printf("lutfen islem turunu giriniz ( + - ) : ");
	scanf("%c",&oper);
	printf("lutfen bir karmasik sayi giriniz: ");
	scanf("%f%f",&birinci.a,&birinci.b);
	printf("lutfen bir karmasik sayi daha giriniz: ");
	scanf("%f%f",&ikinci.a,&ikinci.b);
	if(oper=='+'){
		sonuc.a=birinci.a+ikinci.a;
		sonuc.b=birinci.b+ikinci.b;
	}
	else if(oper=='-'){
		sonuc.a=birinci.a-ikinci.a;
		sonuc.b=birinci.b-ikinci.b;
	}
	else {
		printf("yanlis secim .... ");
	}
	
	printf("SONUC : \n");
	printf("%.1f ",sonuc.a);
	if(sonuc.b>=0){
		printf("+ %.1fi",sonuc.b);
	}
	else{
		printf("%.1f i",sonuc.b);
	}
	return 0;
}
