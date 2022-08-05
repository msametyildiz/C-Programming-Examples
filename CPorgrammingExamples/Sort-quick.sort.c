#include<stdio.h>
#include<stdlib.h>
void quicksort(int arr[],int ilk,int son){
	int i,j,temp,pivot;
	if(ilk <son){
		pivot= ilk;
		i=ilk;
		j=son;
		while(i<j){
			while(arr[i]<=arr[pivot] && i<son){
				i++;
			}
			while(arr[i]<=arr[pivot] && i<son){
				i++;
			}
			if(i<j){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[i];
		arr[i]=arr[j];	
		arr[j]=temp;
		quicksort(arr,ilk,j-1);
		quicksort(arr,j+1,son);
	}
}
int main(){
	int dizi[10]={4,1,64,0,58,27,10,72,100,13};
	printf("once : \n");
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	printf("\nsonra : \n");
	quicksort(dizi,0,9);
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	return 0;
}
