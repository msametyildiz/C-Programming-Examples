//														fonksiyonlar (bölünebilme bulma)
#include<stdio.h>
#include<stdlib.h>
int fonkiki(int *son,int *n){
	if(*n%2==0){
		*son=1;
	}
	else{
		*son=0;
	}
}
int fonkuc(int *coz,int *n){
	if(*n%3==0){
		*coz=1;
	}
	else{
		*coz=0;
	}
}
int main(){
	int sayi,sonuc,cozum;
	printf("lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	fonkiki(&sonuc,&sayi);
	fonkuc(&cozum,&sayi);
	if(sonuc==1&&cozum==1){
		printf("%d sayisi hem 3 e hem de 2 ile tam bolunur..",sayi);
	}
	else if(sonuc==1&&cozum==0){
		printf("%d sayisi 2 ile tam bolunur..",sayi);
	}
	else {
		printf("%d sayisi 3 ile tam bolunur..",sayi);
	}
	return 0;
}
