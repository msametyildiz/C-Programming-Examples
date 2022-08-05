#include<stdio.h>
int main() {
	FILE *dosya;
	dosya=fopen("carpimtablosu.txt","w");
	int i,j;
	for(i=1;i<11;i++){
		for(j=1;j<11;j++){
			fprintf(dosya,"%d * %d = %d\n",i,j,i*j);
		}
		fprintf(dosya,"\n");
	}
	fclose(dosya);
	return 0;
}
--------------------------------------------------------------
#include<stdio.h>
int main() {
	FILE *dosya;
	dosya=fopen("ogrenci.txt","w");
	char isim[20],okul[50],bolum[20];
	printf("adiniz: ");
	gets(isim);
	printf("okulunuz: ");
	gets(okul);
	printf("bolumunuz :");
	gets(bolum);
	fprintf(dosya,"%s\n%s\n%s",isim,okul,bolum);
	fclose(dosya);
	return 0;
}
--------------------------------------------------------------

#include<stdio.h>
int main() {
	FILE *dosya;
	dosya=fopen("ogrenci.txt","a"); // a modu ekleme yapar
	char isim[20],okul[50],bolum[20];
	printf("adiniz: ");
	gets(isim);
	printf("okulunuz: ");
	gets(okul);
	printf("bolumunuz :");
	gets(bolum);
	fprintf(dosya,"\n%s\n%s\n%s",isim,okul,bolum);
	fclose(dosya);
	return 0;
}
--------------------------------------------------------------
#include<stdio.h>
int main() {
	FILE *dosya;
	char karakter;
	dosya=fopen("deneme.txt","r");
	if(dosya!=NULL){
		karakter=fgetc(dosya);// getc dosyadaki ilk karakteri getirir.
		printf("%c",karakter);
	}
	else{
		printf("dosya bulunamadi ...");
	}
	fclose(dosya);
	return 0;
}
--------------------------------------------------------------
 												TEXT DEN CÜMLELERÝ ÇEKME
 											
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
--------------------------------------------------------------
																TXT den veri çekme ve console da yazýrma
#include<stdio.h>
int main() {
	FILE *dosya;
	char arr[50][20],arr2[50][20];
	int arr3[20];
	int i=0;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		while(!feof(dosya)){
			fscanf(dosya,"%s %s %d",&arr[i],&arr2[i],&arr3[i]);
			printf("%s	%s	%d\n",arr[i],arr2[i],arr3[i]);
			i++;
		}
	}
	else{
		printf("ici bos :)");
	}
	return 0;
}

--------------------------------------------------------------
															EOF KULLANIMI   ( BUTUN TXT VERÝLERÝNÝ ÇEKME)
#include<stdio.h>
int main() {
	FILE *dosya;
	char karakter;
	if((dosya=fopen("deneme.txt","r"))!=NULL){
		karakter=fgetc(dosya);
		while(karakter!=EOF){
			printf("%c",karakter); 
			karakter=fgetc(dosya);
		}
	}
	else{
		printf("bos ki..");
	}
	fclose(dosya);
	return 0;
}

--------------------------------------------------------------
																girilen cümleyi istenilen kadar text de alt alta yazdýrma
#include<stdio.h>
int main(){
	FILE *dosya;
	char arr[50];
	int n;
	printf("lutfen bir metin giriniz : ");
	gets(arr);
	printf("text de kac defa yazilsin:");
	scanf("%d",&n);
	dosya=fopen("deneme.txt","w");
	for(int i=0;i<n;i++){
		fputs(arr,dosya);
		fprintf(dosya,"\n");
	}
	fclose(dosya);
	return 0;
}
--------------------------------------------------------------
													malloc-realloc kullanarak dosyaya veri yükleme veri alma
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

 
----------------------------------------
															console dan girilen text i dosyada yazdýrma
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
-----------------------------------------
																Struct ile file kullanma ( ortalama hesaplama)
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

 
-----------------------------------------
														sin cos bulma
														
#include<stdio.h>
#include<math.h>
int main(){
	FILE *dosya;
	float deger,deger2;
	if((dosya=fopen("deneme3.txt","w"))!=NULL){
		for(int i=1;i<=360;i++){
			deger=cos(i);
			deger2=sin(i);
			fprintf(dosya,"%d ---> cos: %.2f\tsin: %.2f\n",i,deger,deger2);
		}
		printf("degerler yazdirildi.");
	}
	else{
		printf("basarisiz...");
	}
	fclose(dosya);
	return 0;
}
-----------------------------------------
												dosya yolu ve ismini girilerek o dosyadaki verileri alma
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
-----------------------------------------
														dosya yedekleme
#include<stdio.h>
#include<stdliba.h>
int main(){
	FILE *giris,*cikis;
	char kaynak[50],hedef[50],karakter;
	printf("lutfen yedeklenecek dosyanin adini ve uzantisini yaziniz : (orn: text.txt)");
	gets(kaynak);
	giris=fopen(kaynak,"r");
	if(giris==NULL){
		printf("dosya bulunamadi ....");
		exit(1);
	}
	printf("lutfen yedekleyeceginiz dosyanin adini ve uzantisini yaziniz : (orn: text.txt)");
	gets(hedef);
	cikis=fopen(hedef,"w");
	if(cikis==NULL){
		printf("dosya olusturulamadi..");
		exit(1);
	}
	for(karakter=fgetc(giris);karakter!=EOF;karakter=fgetc(giris)){
		putc(karakter,cikis);
	}
	printf("yedekleme islemi tamamlandi ...");
	fclose(giris);
	fclose(cikis);
	return 0;
}
 
 
-----------------------------------------
														0 girilene kadar kelime alma ve alýnan kelimeyi dosyaya atma
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *dosya;
	int n;
	char chr[20];
	if((dosya=fopen("deneme.txt","w"))!=NULL){
		printf("lutfen sayi girin (bitirmek icin 0 giriniz ) : ");
		scanf("%d",&n);
		do{
			printf("lutfen bir kelime giriniz : ");
			fflush(stdin);
			gets(chr);
			fprintf(dosya," %s",chr);
			printf("lutfen sayi girin (bitirmek icin 0 giriniz ) : ");
			scanf("%d",&n);
		}while(n!=0);
		printf("\nveri aktarimi basarili bir sekilde saglandi...");
	}
	fclose(dosya);
	return 0;
}
-----------------------------------------
															iki dosyayi ucuncu bir dosyada birlestirme
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *dosya1,*dosya2,*birlesim;
	char karakter;
	dosya1=fopen("deneme2.txt","r");
	if(dosya1==NULL){
		printf("islem basarisiz..");
		exit(1);
	}
	dosya2=fopen("deneme3.txt","r");
	if(dosya2==NULL){
		printf("islem basarisiz..");
		exit(1);
	}
	birlesim=fopen("deneme.txt","w");
	if(birlesim==NULL){
		printf("islem basarisiz..");
		exit(1);
	}
	printf("dosya 1 aktariliyor...\n");
	for(karakter=fgetc(dosya1);karakter!=EOF;karakter=fgetc(dosya1)){
		putc(karakter,birlesim);
	}
	fprintf(birlesim,"\n");
	printf("dosya 2 aktariliyor...\n");
	for(karakter=fgetc(dosya2);karakter!=EOF;karakter=fgetc(dosya2)){
		putc(karakter,birlesim);
	}
	printf("\nislem basarili....\n");
	fclose(dosya1);
	fclose(dosya2);
	fclose(birlesim);
	return 0;
}
-----------------------------------------

-----------------------------------------



 

