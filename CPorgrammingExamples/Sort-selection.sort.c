		//										selectionshort da sýralama 
#include<stdio.h>
#include<stdlib.h>
void selectionshort(int arr[],int sayi){
	int i,j,enk,temp,k;
	for(i=0;i<sayi;i++){
		enk=arr[i];
		k=i;
		for(j=i+1;j<sayi;j++){
			if(enk>arr[j]){
				enk=arr[j];
				k=j;
			}
		}
		temp=arr[i];
		arr[i]=enk;
		arr[k]=temp;
	}
}
int main(){
	int dizi[10]={4,1,64,0,58,27,10,72,100,13};
	printf("once : \n");
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	printf("\nsonra : \n");
	selectionshort(dizi,10);
	for(int i=0;i<10;i++){
		printf("%4d",dizi[i]);
	}
	return 0;
}
