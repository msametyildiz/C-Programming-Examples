#include<stdio.h>
#include<stdlib.h>
struct adres{
	char ad[100],soyad[100],adres[100],tel[11],postakodu[5];
};
int main(){
	int n,istek;
	struct adres adresdefteri[100];
	printf("kac adet kisi bilgileri tutulacak : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d. kisinin adi : ",i+1);
		fflush(stdin);
		gets(adresdefteri[i].ad);
		printf("%d. kisinin soyadi : ",i+1);
		fflush(stdin);
		gets(adresdefteri[i].soyad);
		printf("%d. kisinin adresi : ",i+1);
		fflush(stdin);
		gets(adresdefteri[i].adres);
		printf("%d. kisinin telefon numarasi : ",i+1);
		fflush(stdin);
		gets(adresdefteri[i].tel);
		printf("%d. kisinin posta kodu : ",i+1);
		fflush(stdin);
		gets(adresdefteri[i].postakodu);
	}
	printf("hangi kisinin bilgilerini istiyorsunuz : ");
	scanf("%d",&istek-1);
	printf("%s %s kisisinin \n--->adresi : %s \n--->telefon numarası : %s \n--->posta kodu : %s",adresdefteri[istek].ad,adresdefteri[istek].soyad,adresdefteri[istek].adres,adresdefteri[istek].tel,adresdefteri[istek].postakodu);
	return 0;
}

