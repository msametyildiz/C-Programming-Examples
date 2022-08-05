#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,arr[10]={4,1,64,0,58,27,10,72,100,13},aranan;
	printf("once : \n");
	for(int i=0;i<10;i++){
		printf("%4d",arr[i]);
	}
	printf("\naranan sayi kac ? : ");
	scanf("%d",&aranan);
	for(i=0;i<10;i++){
		if(arr[i]==aranan){
			printf("%d sayisi %d. siradadir. ",aranan,i+1);
			break;
		}
	}
	if(i==10){
		printf("%d sayisi bulunamadi..",aranan);
	}
	return 0;
}
