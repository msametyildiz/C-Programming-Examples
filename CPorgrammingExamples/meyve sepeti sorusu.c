#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sepet{
	char ad[20];
	char formu[10];//yuvarlak kare diktortgen 
	float agirlik,fiyat,toplama=0.0,toplamf=0.0;
	int sayisi;
};
void user(struct sepet meyve[]){
	for(int i=0;i<2;i++){
		printf("lutfen %d.meyvenin adini girin : ",i+1);
		fflush(stdin);
		gets(meyve[i].ad);
		printf("lutfen %s'nin formunu giriniz ( yuvarlak,kare...) : ",meyve[i].ad);
		fflush(stdin);
		gets(meyve[i].formu);
		printf("lutfen %s'nin birim agirligini giriniz  : ",meyve[i].ad);
		scanf("%f",&meyve[i].agirlik);
		printf("lutfen %s'nin adet sayisini giriniz  : ",meyve[i].ad);
		scanf("%d",&meyve[i].sayisi);
		printf("lutfen %s'nin birim fiyatini giriniz  : ",meyve[i].ad);
		scanf("%f",&meyve[i].fiyat);
	}
}
void hesapla(struct sepet meyve[]){
	float toplamf=0.0;
	for(int i=0;i<2;i++){
		meyve[i].toplama=(meyve[i].agirlik*meyve[i].sayisi);
		if(strcmp(meyve[i].formu,"yuvarlak")==0){
			if(meyve[i].agirlik>200){
				meyve[i].toplamf=2*(meyve[i].toplama/1000*meyve[i].fiyat)+3;
				printf("aaaaaaa");
			}
			else{
				meyve[i].toplamf=(meyve[i].toplama/1000*meyve[i].fiyat)+3;
			}
		}
		else if (meyve[i].agirlik>200){
			meyve[i].toplamf=2*(meyve[i].toplama/1000*meyve[i].fiyat);
		}
		else{
			meyve[i].toplamf=(meyve[i].toplama/1000*meyve[i].fiyat);
		}
	}
	printf("\nToplam agirlik : %.2f\n",meyve[0].toplama+meyve[1].toplama);
	printf("\nToplam fiyat : %.2f\n",meyve[0].toplamf+meyve[1].toplamf);
}
int main() {
	struct sepet meyve[2];
	user(meyve);
	hesapla(meyve);
	return 0;
}

 
