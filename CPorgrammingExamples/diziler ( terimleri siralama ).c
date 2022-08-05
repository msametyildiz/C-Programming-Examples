//girilen numara kadar terim alýp terimleri tek çift olma durumuna göre sýralama

#include<stdio.h>
void fonk(int fonkdizi[],int x){
	int i,yenidizi[x],a=0,b=0;
	for(i=0;i<x;i++){
		if(fonkdizi[i]%2!=0){
			yenidizi[a]=fonkdizi[i];
			a++;
		}
		else{
			yenidizi[x-1-b]=fonkdizi[i];
			b++;
		}
		
	}
	printf("\n\n\n");
	for(i=0;i<x;i++){
		printf("%d\t",yenidizi[i]);
	}
}
int main(){
	int dizi[100],remain,sum=0,i,sayi;
	printf("lutfen ogrenci no giriniz: ");
	scanf("%d",&sayi);
	while(sayi>0){
		remain=sayi%10;
		sum+=remain;
		sayi/=10;
	}
	for(i=0;i<sum;i++){
		printf("lutfen dizinin %d. terimini giriniz:",i+1);
		scanf("%d",&dizi[i]);
		printf("\n");
	}
	fonk(dizi,sum);
	printf("\n\n\n");
	return 0;
}
