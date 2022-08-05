#include<stdio.h>
#include<stdlib.h>
void bubbleshort(int arr[],int sayi){
	int i,j,enk,temp,k;
	for(i=0;i<sayi-1;i++){
		for(j=0;j<sayi-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int dizi[10]={4,1,64,0,58,27,10,72,100,13};
	printf("once : \n");
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	printf("\nsonra : \n");
	bubbleshort(dizi,10);
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	return 0;
}
