#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct ogrenci{
	char ad[20];
	int numara;
	int puan;
}Ogrenci;
int gectimi(int *kontrol){
	if(*kontrol>=50){
		return 1;
	}
	else{
		return 0;
	}
} 
int main(){
	struct ogrenci ogrenci1={"samet",2010213018,90};
	struct ogrenci ogrenci2;
	strcpy(ogrenci2.ad,"muhammed");
	ogrenci2.numara=2010213019;
	ogrenci2.puan=35;
	struct ogrenci *ogrenci3;
	ogrenci3=&ogrenci1;
	Ogrenci ogrenci4;
	strcpy(ogrenci4.ad,"yildiz");
	//scanf("%s",ogrenci4.ad);
	ogrenci4.numara=1000;
	ogrenci4.puan=100;
	printf("n1. ogrenci %s numarasi : %d puani : %d gectimi = %d",ogrenci1.ad,ogrenci1.numara,ogrenci1.puan,gectimi(&ogrenci1.puan));
	printf("\n2. ogrenci %s numarasi : %d puani : %d gectimi = %d",ogrenci2.ad,ogrenci2.numara,ogrenci2.puan,gectimi(&ogrenci2.puan));
	printf("\n3. ogrenci %s numarasi : %d puani : %d gectimi = %d",ogrenci3->ad,ogrenci3->numara,ogrenci3->puan,gectimi(&ogrenci3->puan));
	printf("\n4. ogrenci %s numarasi : %d puani : %d gectimi = %d",ogrenci4.ad,ogrenci4.numara,ogrenci4.puan,gectimi(&ogrenci4.puan));
	return 0;
}
----------------------
																UNÝON DA BOYUT
unionda en büyük alana sahip deðiþkenin kapladýðý kadar ayrýlýr
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union insan{
	char *ad;
	int yas;
	short a;
	long double b;
};
int main() {
	union insan insan1;
	printf("ismin boyutu: %d\n",sizeof(insan1.ad));
	printf("yasin boyutu: %d\n",sizeof(insan1.yas));
	printf("a boyutu: %d\n",sizeof(insan1.a));
	printf("b boyutu: %d\n",sizeof(insan1.b));
	return 0;
}
																************
																union da adres sorgulama 
#include<stdio.h>
#include<string.h>
union adres{
	int x;
	int y;
};
int main() {
	int *X,*Y;
	union adres adres1;
	adres1.x=100;
	X=&adres1.x;
	printf("Tamsayi (x)= %d bellek adresi : %d\n",adres1.x,X);
	adres1.y=200;
	Y=&adres1.y;
	printf("Tamsayi (y)= %d bellek adresi : %d",adres1.y,Y);
	return 0;
}

---------------------------
#include<stdio.h>

union insan{
	char *ad;
	int yas;
	short a;
	//long double b;
};
int main() {
	union insan insan1;
	insan1.ad="samet";
	printf("%s\n",insan1.ad);
	insan1.yas=21;
	insan1.a=25;
	printf("%d\n",insan1.yas);
	printf("%d\n",insan1.a);
	printf("%s\n",insan1.ad);
	return 0;
}
-------------------------------
burada yapý içinde yapý kullanýldý
#include<stdio.h>
#include<string.h>
struct adress{
	char cadde[50];
	char mahalle[50];
	char sokak[50];
};
struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
	int yas;
	struct adress adres;
};
int main() {
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.ad,"muhammed");
	strcpy(ogrenci1.soyad,"yildiz");
	ogrenci1.numara=100;
	ogrenci1.yas=21;
	strcpy(ogrenci1.adres.mahalle,"battalgazi mahallesi");
	strcpy(ogrenci1.adres.cadde,"selcuklu caddesi");
	strcpy(ogrenci1.adres.sokak,"932.sokak");
	printf("%s %s %d %d\n %s %s %s",ogrenci1.ad,ogrenci1.soyad,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
	return 0;
}
--------------------------------
                        Structure Dizileri
#include<stdio.h>
#include<string.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
};
int main() {
	struct ogrenci ogrenciler[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d.ogrencinin adini girin : ",i+1);
		gets(ogrenciler[i].ad);
		fflush(stdin);
		printf("%d.ogrencinin soyadini girin : ",i+1);
		gets(ogrenciler[i].soyad);
		fflush(stdin);
		printf("%d.ogrencinin numarasini girin : ",i+1);
		scanf("%d",&ogrenciler[i].numara);
		fflush(stdin);
		printf("\n");
	}
	for(i=0;i<3;i++){
		printf("%d.ogrencinin bilgileri %s %s %d\n",i+1,ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].numara);
	}
	return 0;
}
------------------------
                            structlarda  fonksiyounu kullanma
#include<stdio.h>
#include<string.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
};
void goster(struct ogrenci a){
	printf("ogrenci bilgileri : %s %s %d",a.ad,a.soyad,a.numara);
}
struct ogrenci degerAl(){
	struct ogrenci yeni;
	printf("bilgileri girin: ");
	scanf("%s %s %d",&yeni.ad,&yeni.soyad,&yeni.numara);
	return yeni;
}
int main() {
	struct ogrenci ogrenci1 = degerAl();
	goster(ogrenci1);
	return 0;
}
 ---------------------------------------------
                 										pointerlar ve yapýlar (struct)
 #include<stdio.h>
#include<string.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
};
int main() {
	struct ogrenci ogrenci1;
	struct ogrenci *tut;
	tut =&ogrenci1;
	strcpy(ogrenci1.ad,"muhammed");
	strcpy(ogrenci1.soyad,"yildiz");
	ogrenci1.numara=126;
	printf("%s %s %d",tut->ad,tut->soyad,tut->numara);
	return 0;
}
 ---------------------------------------------
 												pointer and struct (call by reference) referansla caðýrma
#include<stdio.h>
#include<string.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
};
void goster(struct ogrenci *p){
		printf("ogrenci bilgileri: \nisim:%s\nsoyisim:%s\nnummara:%d",p->ad,p->soyad,p->numara);
}
int main() {
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.ad,"muhammed");
	strcpy(ogrenci1.soyad,"yildiz");
	ogrenci1.numara=126;
	goster(&ogrenci1);
	return 0;
}
																************
#include<stdio.h>
#include<string.h>
struct ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
};
void degerAl(struct ogrenci *p){
	strcpy(p->ad,"Samet");
	strcpy(p->soyad,"yilmaz");
	p->numara=125;
	
}
int main() {
	struct ogrenci ogrenci1;
	strcpy(ogrenci1.ad,"muhammed");
	strcpy(ogrenci1.soyad,"yildiz");
	ogrenci1.numara=126;
	degerAl(&ogrenci1);
	printf("ogrenci bilgileri: \nisim:%s\nsoyisim:%s\nnummara:%d",ogrenci1.ad,ogrenci1.soyad,ogrenci1.numara);

	return 0;
}
 ---------------------------------------------
 #include<stdio.h>
#include<string.h>
struct kisi{
	char ad[20],soyad[20],adres[50],telefon[11],postakodu[5];
};
void yazdir(struct kisi *p,int n){
	int i;
	printf("ADI\tSOYADI\tTELEFON.NO\tADRES\tPOSTA.KODU\n",i+1);
	printf("-----------------------------------------------------\n");
	for(i=0;i<n;i++){
	
		printf("%s\t%s\t%s\t%s\t%s\n",(p+i)->ad,(p+i)->soyad,(p+i)->telefon,(p+i)->adres,(p+i)->postakodu);
		fflush(stdin);
	}
}
int main() {
	int n,i;
	printf("kac adet kisi bilgisi almak istersiniz : ");
	scanf("%d",&n);
	struct kisi kisiler[n] ;
	for(i=0;i<n;i++){
		printf("%d.kisinin adi: ",i+1);
		fflush(stdin);
		gets(kisiler[i].ad);
		printf("%d.kisinin soyadi: ",i+1);
		fflush(stdin);
		gets(kisiler[i].soyad);
		printf("%d.kisinin adresi: ",i+1);
		fflush(stdin);
		gets(kisiler[i].adres);
		printf("%d.kisinin telefon numarasi: ",i+1);
		fflush(stdin);
		gets(kisiler[i].telefon);
		printf("%d.kisinin postakodu: ",i+1);
		fflush(stdin);
		gets(kisiler[i].postakodu);
	}
	yazdir(kisiler,n);
	return 0;
}
 ---------------------------------------------
														Struct icerisinde Union kullanma 
#include<stdio.h>
#include<string.h>
struct deger{
	int tip;
	union {
		char karakter;
		float sayi;
	}birlesim;
};
int main() {
	struct deger degerler[20];
	int i=-1,n=0,j;
	float ort=0.0;
	do{
		i++;
		printf("lutfen bir tam sayi girin: ");
		fflush(stdin);
		scanf("%d",&degerler[i].tip);
		if(degerler[i].tip==1){
			printf("lutfen bir karakter girin : ");
			fflush(stdin);
			scanf("%c",&degerler[i].birlesim.karakter);
		}
		else if(degerler[i].tip==0){
			printf("lutfen bir real sayi girin : ");
			fflush(stdin);
			scanf("%f",&degerler[i].birlesim.sayi);
		}
	}while(degerler[i].tip==1||degerler[i].tip==0);
	for(j=0;j<i;j++){
		ort+=degerler[j].birlesim.sayi;
		n++;
	}
	ort/=n;
	printf("real sayilarin sonucu %.2f dir",ort);
	return 0;
}
  ---------------------------------------------
														unionda daire alan ve cevere bulma 
#include<stdio.h>
#include<string.h>
union hesapla{
	float cevre,alan;
};
int main() {
	union hesapla bul;
	int r;
	float pi=3.13;
	printf("lutfen dairenin yari capini girin : ");
	scanf("%d",&r);
	bul.alan=pi*r*r;
	printf("girdigininiz yari capli dairenin;\nalani : %.2f dir ",bul.alan);
	bul.cevre=2*pi*r;
	printf("\ncevresi : %.2f ",bul.cevre);
	return 0;
}
  ---------------------------------------------
													structlarda personel bilgileri sorusu
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct kisi{
	int sifre,yas;
	float maas;
	char ad[20],soyad[20],cinsiyet[5];
}personel;
void sirala(personel p[],int n){
	int i,j;
	personel t;
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			if(strcmp(p[i].ad,p[j].ad)>0){
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
}
int main() {
	int i,n;
	printf("kac adet personel bilgisi girmek istiyorsunuz : ");
	scanf("%d",&n);	
	personel person[n];
	for(i=0;i<n;i++){
		printf("lutfen personelin adini girin: ");
		fflush(stdin);
		gets(person[i].ad);
		printf("lutfen personelin soyadini girin: ");
		fflush(stdin);
		gets(person[i].soyad);
		printf("lutfen personelin cinsiyetini girin: ");
		fflush(stdin);
		gets(person[i].cinsiyet);
		printf("lutfen personelin yasini girin: ");
		fflush(stdin);
		scanf("%d",&person[i].yas);
		printf("lutfen personelin sifresini girin: ");
		fflush(stdin);
		scanf("%d",&person[i].sifre);
		printf("lutfen personelin maasini girin: ");
		fflush(stdin);
		scanf("%f",&person[i].maas);
		
	}
	sirala(person,n);
	printf("PERSONEL BILGILERI : \n");
	for(i=0;i<n;i++){
		printf("%s %s - %s - %d-maas--> %.2f-sifre--> %d\n",person[i].ad,person[i].soyad,person[i].cinsiyet,person[i].yas,person[i].maas,person[i].sifre);
	}
	return 0;
}
  ---------------------------------------------
#include<stdio.h>
#include<string.h>
struct ogrenci{
	int no,sinif;
	char ad[20],soyad[20];
};
int main() {
	struct ogrenci person;
	printf("lutfen bir ogrenci no girin : ");
	scanf("%d",&person.no);
	if(person.no == 2019){
		person.no=2019;
		strcpy(person.ad,"Muhammed samet");
		strcpy(person.soyad,"Yildiz");
		person.sinif=5;
		printf("ogrencinin bilgileri :\nadi :%s\nsoyadi :%s\nsinif :%d\nno :%d\n",person.ad,person.soyad,person.sinif,person.no);
	}
	
	return 0;
} 
 ---------------------------------------------
  iki zaman arasindaki farki bulma
  #include<stdio.h>
#include<string.h>
struct zaman{
	int saniye,dakika,saat;
};
void hesapla(struct zaman t1,struct zaman b,struct zaman *f){
	if(b.saniye<t1.saniye){
		--b.dakika;
		b.saniye+=60;
	}
	f->saniye=b.saniye-t1.saniye;
	if(b.dakika<t1.dakika){
		--b.saat;
		b.dakika+=60;
	}
	f->saat=b.saat-t1.saat;
	f->dakika=b.dakika-t1.dakika;
		
}
int main() {
	struct zaman t1,b,f;
	printf("baslangic zamanini giriniz :(saat,dakika,saniye) :");
	scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);
	printf("bitis zamanini giriniz :(saat,dakika,saniye) :");
	scanf("%d%d%d",&b.saat,&b.dakika,&b.saniye);
	hesapla(t1,b,&f);
	printf("iki zaman dilimi arasindaki fark :\t%d:%d:%d",f.saat,f.dakika,f.saniye);
	return 0;
}
 ---------------------------------------------
 														UNION VE STRUCT IN BELLEKTE NE KADAR YER KAPLADIÐINI BULMA
#include<stdio.h>
#include<string.h>
struct kontrol1{
	int a;
	char b;
	long c;
};
union kontrol2{
	int x;
	char y;
	long z;
};
int main() {
	printf("%d\n",sizeof(char));				1
	printf("%d\n",sizeof(int));					4	
	printf("%d\n",sizeof(long));				4	
	printf("%d\n",sizeof(double));				8
	printf("%d\n",sizeof(struct kontrol1));     12 
	printf("%d\n",sizeof(union kontrol2));		4
	return 0;
}
 ---------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct karmasiksayi{
	int real,sanal;
};
int topla(struct karmasiksayi karmasik){
	temp.real=karmasik1.real+karmasik2.real;
	temp.sanal=karmasik1.sanal+karmasik2.sanal;
	return temp;
}
int main() {
	karmasiksayi karmasik1,karmasik2;
printf("lutfen ilk karmasik sayinin real kismini girin: ");
	scanf("%d",&karmasik[1].real);
	printf("lutfen ilk karmasik sayinin sanal kismini girin: ");
	scanf("%d",&karmasik[1].sanal);
	printf("lutfen ikinci karmasik sayinin real kismini girin: ");
	scanf("%d",&karmasik[2].real);
	printf("lutfen ikinci karmasik sayinin sanal kismini girin: ");
	scanf("%d",&karmasik[2].sanal);
	topla(karmasik1,karmasik2);
	printf("sonuc: %d + %di",temp.real,temp.sanal);
	return 0;
}
  ---------------------------------------------
Otel Müþterilerenin Yapýlan Harcamaya ve Oda Tercihlerine Göre Ödeyeceði Tutar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct katilimci{
	char ad[20];
	char soyad[20];
	int kahvalti; // 0 hayir 1 evet
	int aksamyemek; // 0 hayir 1 evet
	int hotel; // 1 otel yok 2 iki yildizli 3 uc yildizli
	int yalniz; // 0 arkadasiyla 1 yalniz
	float odeme; 
};
void hotelhesapla(struct katilimci musteri[4]){
	for(int i=0;i<4;i++){
		if(musteri[i].hotel==2){
			printf("2 yildizli oteli secen musteri %s %s\n",musteri[i].ad,musteri[i].soyad);
			musteri[i].odeme+=75;
		}
		else if(musteri[i].hotel==3){
			musteri[i].odeme+=100;
		}
	}
}
void hizmethesapla(struct katilimci musteri[4]){
	for(int i=0;i<4;i++){
		if(musteri[i].yalniz==0){
			if(musteri[i].kahvalti==1|| musteri[i].aksamyemek==1){
				if(musteri[i].kahvalti==1){
					musteri[i].odeme+=(2*15);
				}
				else{
					musteri[i].odeme+=(2*30);
				}
			}
		}
		else if(musteri[i].kahvalti==1 || musteri[i].aksamyemek==1){
			if(musteri[i].kahvalti==1){
				musteri[i].odeme+=15;
			}
			if(musteri[i].aksamyemek==1){
				musteri[i].odeme+=30;
			}
		}
	}
}
void hesapdokumu(struct katilimci musteri[4]){
	for(int i=0;i<4;i++){
		printf("\n%d. MUSTERI HESAP DOKUMU : \n",i+1);
		printf("Ad Soyad : %s %s\n",musteri[i].ad,musteri[i].soyad);
		printf("Toplam Tutar : %.2f\n\n\n",musteri[i].odeme);
	}
}
int main() {
	struct katilimci musteri[4]={{"Muhammed","Yildiz",1,1,3,1,0.0},{"Samet","Yildiz",0,0,2,0,0.0},{"Ali","Yildiz",1,0,1,0,0.0},{"Ayse","Yildiz",0,1,2,0,0.0}};
	hotelhesapla(musteri);
	hizmethesapla(musteri);
	hesapdokumu(musteri);
	return 0;
}

 
