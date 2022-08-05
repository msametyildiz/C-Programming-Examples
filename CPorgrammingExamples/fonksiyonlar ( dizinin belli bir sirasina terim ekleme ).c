//															          diziye terim ekleme


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fonk(int yenidizi[],int sira,int yenisayi,int n){
	int i,degisim,a[100];
	for(i=0;i<n+1;i++){
		if(i==sira-1){
			printf("%d\t", yenisayi);
		}
		else if(i>sira-1){
			a[i]=yenidizi[i-1];
			printf("%d\t", a[i]);
		}
		else{
			printf("%d\t", yenidizi[i]);
		}
	}
}
int main(){
	int sayi,i,dizi[100],ekle,degisim;
	srand(time(NULL));
	printf("kac adet random sayi olsun : \n");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		dizi[i]=rand()%100+1;
		printf("%d\t",dizi[i]);
	}
	printf("\n\n");
	printf("dizinin kacinci elemanini degistirmek istersiniz : \n");
	scanf("%d",&degisim);
	printf("diziye hangi sayiyi eklemek istersiniz :\n ");
	scanf("%d",&ekle);
	fonk(dizi,degisim,ekle,sayi);
	
	return 0;
}

// 																				RESULT-2   
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,i,sira,ekle,gecici,dizi[100];
	srand(time(NULL));
	printf(" dizi kac eleman olsun : ");
	scanf("%d",&n);
	printf("dizinin hangi terimine sayi eklemek istersin:");
	scanf("%d",&sira);
	printf("hangi sayiyi eklemek istersin: ");
	scanf("%d",&ekle);
	for(i=0;i<n;i++){
		dizi[i]=rand()%100+1;
		printf("%d\t",dizi[i]);
	}
	for(i=n+1;i>=sira-1;i--){
			if(i==sira-1){
				dizi[i]=ekle;
			}
			else{
				dizi[i+1]=dizi[i];
			}
		}
	printf("\ndizinin son hali :\n");
	for(i=0;i<n+1;i++){
		printf("%d\t",dizi[i]);
	}
	return 0;
}
