//											diziler (dizinin max ve min deðerlerini bulma)
#include <stdio.h>
int main(){
	int dizi[10],i;
	for(i=0;i<10;i++){
		printf("lutfen dizinin %d.elemanini giriniz :",i+1);
		scanf("%d",&dizi[i]);
	}
	int max=0;
	int min=dizi[0];
	for(i=0;i<10;i++){
		printf("%d\t",dizi[i]);
	}
	for(i=0;i<10;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
		else if(dizi[i]<min){
			min=dizi[i];
		}
		else{
			continue;
		}
	}
	printf("dizinin en buyuk elemani : %d\ndizinin en kucuk elemani :%d",max,min);
	return 0;
}
