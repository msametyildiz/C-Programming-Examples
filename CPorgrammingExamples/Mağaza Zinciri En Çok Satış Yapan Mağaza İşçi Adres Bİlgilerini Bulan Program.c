#include<stdio.h>
#include<stdlib.h>
struct magaza{
	char ad[20],adres[50],telefonno[11];
	float satistutar=0.0f,ort=0.0;
	int yasli=0;
	struct urun{
		float fiyat;
		int cod;
		
	}urun[3];
	struct calisan{
		char ad[20],soyad[20];
		int yas;
	}isci[3];
};
void magazabil(struct magaza shop[],int n){
	for(int i=0;i<n;i++){
		printf("lutfen %d. magazanin adini giriniz : ",i+1);
		fflush(stdin);
		gets(shop[i].ad);
		printf("lutfen %s magazasinin adresini giriniz : ",shop[i].ad);
		gets(shop[i].adres);
		printf("lutfen %s magazasinin telefon numarasini giriniz : ",shop[i].ad);
		gets(shop[i].telefonno);
		printf("lutfen %s magazasinin bir gunluk satis tutarini giriniz : ",shop[i].ad);
		scanf("%f",&shop[i].satistutar);
	}
}
void urunbil(struct magaza shop[],int n){
	float toplam=0;
	for(int i=0;i<n;i++){
		printf("%s magazasindaki urun bilgileri: \n ",shop[i].ad);
		for(int j=0;j<3;j++){
			printf("%s magazasindaki %d. urunun codu: \n ",shop[i].ad,j+1);
			scanf("%d",&shop[i].urun[j].cod);
			printf("%s magazasindaki %d. urunun fiyati: \n ",shop[i].ad,j+1);
			scanf("%f",&shop[i].urun[j].fiyat);
			toplam+=shop[i].urun[j].fiyat;	
		}
		shop[i].ort=toplam/3;
		toplam=0;
	}
}
void calisanbil(struct magaza shop[],int n){
	for(int i=0;i<n;i++){
		printf("%s magazasindaki calisan bilgileri: \n ",shop[i].ad);
		for(int j=0;j<3;j++){
			printf("%s magazasindaki\n%d. calisanin adi: \n ",shop[i].ad,j+1);
			fflush(stdin);
			gets(shop[i].isci[j].ad);
			printf("%s calisanin soyadi : \n ",shop[i].isci[j].ad);
			fflush(stdin);
			gets(shop[i].isci[j].soyad);
			printf("%s %s calisanin yasi : \n ",shop[i].isci[j].ad,shop[i].isci[j].soyad);
			fflush(stdin);
			scanf("%d",&shop[i].isci[j].yas);
			if(shop[i].isci[j].yas>shop[i].yasli){
				shop[i].yasli=shop[i].isci[j].yas;
			}
		}
		
	}
}
void bestbil(struct magaza shop[],int n){
	printf("BUTUN MAGAZALARDA CALISAN EN YASLI KISI :\n");
	int oldyears=shop[0].yasli,best;
	for(int i=0;i<n;i++){
		if(shop[i].yasli>oldyears){
			oldyears=shop[i].yasli;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(shop[i].isci[j].yas==oldyears){
				printf("%s %s\n\n",shop[i].isci[j].ad,shop[i].isci[j].soyad);				
			}
		}
	}
	printf("MAGAZALARIN URUN FIYAT ORTALAMALARI : \n");
	for(int i=0;i<n;i++){
		printf("%s magazasinin urun fiyat oralamasi: %.2f\n",shop[i].ad,shop[i].ort);
	}
	printf("EN YUKSEK SATIS DEGERLÝ MAGAZA : \n");
	best=shop[0].satistutar;
	for(int i=0;i<n;i++){
		if(shop[i].satistutar>best){
			best=shop[i].satistutar;
		}
	}
	for(int i=0;i<n;i++){
		if(shop[i].satistutar==best){
			printf("%s magazasi satis degeri: %.2f\n",shop[i].ad,shop[i].satistutar);
		}
	}
}
int main() {
	int n;
	printf("kac adet magaza var : ");
	scanf("%d",&n);
	struct magaza shop[n];
	magazabil(shop,n);
	urunbil(shop,n);
	calisanbil(shop,n);
	bestbil(shop,n);
	return 0;
}

 
