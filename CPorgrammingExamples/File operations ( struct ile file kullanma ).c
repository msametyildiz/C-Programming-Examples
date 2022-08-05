#include<stdio.h>
struct ogrenci{
	char ad[20],soyad[20],ders[20];
	int vize1,vize2,final;
	float ort;
};
void bilgial(struct ogrenci bilgi[],int n){
	for(int i=0;i<n;i++){
		printf("lutfen %d. ogrencinin adini giriniz : ",i+1);
		fflush(stdin);
		gets(bilgi[i].ad);
		printf("lutfen %s nin soyadini giriniz : ",bilgi[i].ad);
		fflush(stdin);
		gets(bilgi[i].soyad);
		printf("lutfen ders adini giriniz : ");
		fflush(stdin);
		gets(bilgi[i].ders);
		printf("lutfen %s %s ogrencisinin vize1 notunu giriniz : ",bilgi[i].ad,bilgi[i].soyad);
		scanf("%d",&bilgi[i].vize1);
		printf("lutfen %s %s ogrencisinin vize2 notunu giriniz : ",bilgi[i].ad,bilgi[i].soyad);
		scanf("%d",&bilgi[i].vize2);
		printf("lutfen %s %s ogrencisinin final notunu giriniz : ",bilgi[i].ad,bilgi[i].soyad);
		scanf("%d",&bilgi[i].final);
	}
}
void nothesapla(struct ogrenci bilgi[],int n){
	for(int i=0;i<n;i++){
		bilgi[i].ort=(bilgi[i].vize1*0.2)+(bilgi[i].vize2*0.2)+(bilgi[i].final*0.6);
	}
}
int main(){
	int  n;
	printf("ogrenci sayisini giriniz : ");
	scanf("%d",&n);
	struct ogrenci bilgi[n];
	bilgial(bilgi,n);
	nothesapla(bilgi,n);
	FILE *dosya;
	if((dosya=fopen("ogrencibilgileri.txt","w"))!=NULL){
		for(int i=0;i<n;i++){
			fprintf(dosya,"%s %s %s \n\tvize1:%d\tvize2:%d\tfinal:%d\t ortalama: %.f\n\n",bilgi[i].ad,bilgi[i].soyad,bilgi[i].ders,bilgi[i].vize1,bilgi[i].vize2,bilgi[i].final,bilgi[i].ort);
		}
		printf("data yuklendi..");
	}
	else{
		printf("basarisiz...");
	}
	return 0;
}

 
