// dizizler ve fonksiyonlar basamak kontrolü
#include<stdio.h>
int kontrol(int sayi){
	int first,remain,result,sonuc;
	first=sayi%10;
	while(sayi>0){
		remain=sayi%10;
		if(remain==first){
			sonuc=1;
		}
		else{
			sonuc=0;
		}
		sayi/=10;
	}
	if(sonuc==1){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int result,A[10]={233,45,777,81,999999,36,90,88,11,61},i;
	//result=kontrol(A,N);
	for(i=0;i<10;i++){
		result=kontrol(A[i]);
		if(result==1){
			printf("%d --> tum basamaklari esittir.",A[i]);
		}
		else{
			printf("%d --> tum basamaklari esit degildir.",A[i]);
		}
		printf("\n");
	}
}
