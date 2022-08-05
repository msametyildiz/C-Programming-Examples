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

 
