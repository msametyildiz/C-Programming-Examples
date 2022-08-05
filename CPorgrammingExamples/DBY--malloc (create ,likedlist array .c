// 													DBY de dizi oluþturma-sýralma-max ve min bulma
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void diziolustur(int n,int *arr){
	for(int i=0;i<n;i++){
		*(arr+i)=rand()%100+1;
		printf("%4d-->(%d)",*(arr+i),(arr+i));
	}
}
void sirala(int n,int *arr){
	int gecici;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*(arr+j)>*(arr+j+1)){
				gecici=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=gecici;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%4d-->(%d)",*(arr+i),(arr+i));
	}
}
void maxmin(int n, int *arr){
	int max,min;
	max=min=*arr;
	for(int i=0;i<n;i++){
		if(*(arr+i)>max){
			max=*(arr+i);
		}
		else if(*(arr+i)<min){
			min=*(arr+i);
		}
	}
	printf("max = %d\tmin = %d",max,min);
}
int main(){
	int n;
	srand(time(NULL));
	printf("how many elements should be produced : ");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	printf("ARRAY : \n");
	diziolustur(n,arr);
	printf("\nORDERED ARRAY : \n");
	sirala(n,arr);
	printf("\nMAX AND MIN OF ARRAY : \n");
	maxmin(n,arr);
	free(arr);
	
	
	return 0;
}
