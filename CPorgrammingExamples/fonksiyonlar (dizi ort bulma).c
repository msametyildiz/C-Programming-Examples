#include<stdio.h>
#include<stdlib.h>
float fonk(int yenidizi[], int sayi){
	int sum=0,i;
	for(i=0;i<sayi;i++){
		sum=sum+yenidizi[i];
	}
	return (float)sum/sayi;
}
int main(){
	int n,dizi[100],i;
	float ort;
	printf("dizi kac elemanli olsun : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("lutfen dizinin %d.elemanini giriniz :\n",i+1);
		scanf("%d",&dizi[i]);
	}
	ort=fonk(dizi,n);
	printf("dizinin elemanlarinin ortalamasi -->  %.2f",ort);
	return 0;
}
