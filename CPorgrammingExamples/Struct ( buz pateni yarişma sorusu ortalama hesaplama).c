/*Bir buz pateni karşılaşmasında,bir yarışmacının performansı 6.00 üzerinden puanlanarak 10 hakem tarafından
    değerlendirilmektedir.Yarışmacının performans puanı ise hakemlerin vermiş olduğu en düşük ve en yüksek puan
    atılıp,geri kalan puanların aritmetik ortlaması alınarak bulunmaktadır.Yazacağınız programda yarışmacının
    adı,soyadı performans puanını hesaplayıp ekranda görüntüleyiniz.Performans hesaplamasını tek parametreli
    bir fonksiyonda yapınız.Bu fonksiyon yarışmacıya ait yapıyı parametre olarak almalı ve performans puanını
    hesaplayarak geri döndürmelidir.*/
    
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct yarismaci{
	char ad[20];
	char soyad[20];
	float puan[10];
};
float hesapla(struct yarismaci arr){
	float max,min,sum=0;
	max=0.0;
	min=6.0;
	for(int i=0;i<10;i++){
		if(arr.puan[i]>max){
			max=arr.puan[i];
		}
		else if(arr.puan[i]<min){
			min=arr.puan[i];
		}
		sum+=arr.puan[i];
	}
	return(float) (sum-max-min)/10;
}
int main(){
	struct yarismaci arr;
	printf("yarismacinin ismi : ");
	scanf("%s",&arr.ad);
	printf("yarismacinin soyismi : ");
	scanf("%s",&arr.soyad);
	for(int i=0;i<10;i++){
		printf("%d.hakemin puani : ",i+1);
		scanf("%f",&arr.puan[i]);
	}
	printf("yarismacinin ortalamasi = %.2f",hesapla(arr));
	
	return 0;
}
