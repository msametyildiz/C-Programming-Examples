#include<stdio.h>
#include<stdlib.h>
void insertionsort(int arr[],int sayi){
	int i,j,enk,temp,k;
	for(i=1;i<sayi;i++){
		j=i;
		while(j>0 && arr[j]<arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				j--;
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
	insertionsort(dizi,10);
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	return 0;
}
