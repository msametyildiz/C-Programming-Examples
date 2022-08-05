#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ekip{
	char ekip_adi[20];
	struct oyuncu{
		char ad[20],soyad[20];
		int yas,seviye;
	}player1,player2;
};

int main() {
	int i,n;
	printf("kac adet ekp olsun : ");
	scanf("%d",&n);
	struct ekip equipe[n];
	for(i=0;i<n;i++){
		printf("%d.ekip'in adini girin :\n",i+1);
		fflush(stdin);
		gets(equipe[i].ekip_adi);
		printf("1. Player :\n");
		printf("oyuncunun adini girin:");
		gets(equipe[i].player1.ad);
		printf("oyuncunun soyadini girin:");
		gets(equipe[i].player1.soyad);
		printf("oyuncunun yasini girin:");
		scanf("%d",&equipe[i].player1.yas);
		printf("oyuncunun seviyesini girin:");
		scanf("%d",&equipe[i].player1.seviye);
		printf("2. Player :\n");
		printf("oyuncunun adini girin:");
		fflush(stdin);
		gets(equipe[i].player2.ad);
		printf("oyuncunun soyadini girin:");
		gets(equipe[i].player2.soyad);
		printf("oyuncunun yasini girin:");
		scanf("%d",&equipe[i].player2.yas);
		printf("oyuncunun seviyesini girin:");
		scanf("%d",&equipe[i].player2.seviye);
	}
	for(i=0;i<n;i++){
		printf("%s Ekip'i'\n",equipe[i].ekip_adi);
		printf("1. Player :\n");
		printf("oyuncunun adi: %s\n",equipe[i].player1.ad);
		printf("oyuncunun soyadi: %s\n",equipe[i].player1.soyad);
		printf("oyuncunun yasi: %d\n",equipe[i].player1.yas);
		printf("oyuncunun seviyesi: %d\n",equipe[i].player1.seviye);
		printf("2. Player :\n");
		printf("oyuncunun adi: %s\n",equipe[i].player2.ad);
		printf("oyuncunun soyadi: %s\n",equipe[i].player2.soyad);
		printf("oyuncunun yasi: %d\n",equipe[i].player2.yas);
		printf("oyuncunun seviyesi: %d\n",equipe[i].player2.seviye);
	}
	return 0;
}

 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ekip{
	char ekip_adi[20];
	struct oyuncu{
		char ad[20],soyad[20];
		int yas,seviye;
	}player1,player2;
};

int main() {
	int i,n;
	printf("kac adet ekp olsun : ");
	scanf("%d",&n);
	struct ekip equipe[n];
	for(i=0;i<n;i++){
		printf("%d.ekip'in adini girin :\n",i+1);
		fflush(stdin);
		gets(equipe[i].ekip_adi);
		printf("1. Player :\n");
		printf("oyuncunun adini girin:");
		gets(equipe[i].player1.ad);
		printf("oyuncunun soyadini girin:");
		gets(equipe[i].player1.soyad);
		printf("oyuncunun yasini girin:");
		scanf("%d",&equipe[i].player1.yas);
		printf("oyuncunun seviyesini girin:");
		scanf("%d",&equipe[i].player1.seviye);
		printf("2. Player :\n");
		printf("oyuncunun adini girin:");
		fflush(stdin);
		gets(equipe[i].player2.ad);
		printf("oyuncunun soyadini girin:");
		gets(equipe[i].player2.soyad);
		printf("oyuncunun yasini girin:");
		scanf("%d",&equipe[i].player2.yas);
		printf("oyuncunun seviyesini girin:");
		scanf("%d",&equipe[i].player2.seviye);
	}
	for(i=0;i<n;i++){
		printf("%s Ekip'i'\n",equipe[i].ekip_adi);
		printf("1. Player :\n");
		printf("oyuncunun adi: %s\n",equipe[i].player1.ad);
		printf("oyuncunun soyadi: %s\n",equipe[i].player1.soyad);
		printf("oyuncunun yasi: %d\n",equipe[i].player1.yas);
		printf("oyuncunun seviyesi: %d\n",equipe[i].player1.seviye);
		printf("2. Player :\n");
		printf("oyuncunun adi: %s\n",equipe[i].player2.ad);
		printf("oyuncunun soyadi: %s\n",equipe[i].player2.soyad);
		printf("oyuncunun yasi: %d\n",equipe[i].player2.yas);
		printf("oyuncunun seviyesi: %d\n",equipe[i].player2.seviye);
	}
	return 0;
}

 
