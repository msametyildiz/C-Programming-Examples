#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,arr[10]={4,1,64,0,58,27,10,72,100,13},aranan,temp,ilk,son,ortanca;
	printf("once : \n");
	for(int i=0;i<10;i++){
		printf("%4d",arr[i]);
	}
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nsiralanmis hali : \n");
	for(i=0;i<10;i++){
		printf("%4d",arr[i]);
	}
	printf("\naranan sayi kac ? : ");
	scanf("%d",&aranan);
	ilk=0;
	son=9;
	ortanca=(son+ilk)/2;
	while(ilk<=son){
		if(arr[ortanca]<aranan){
			ilk=ortanca+1;
		}
		else if(arr[ortanca]==aranan){
			printf("%d sayisi %d. siradadir. ",aranan,ortanca+1);
			break;
		}
		else{
			son=ortanca-1;
		}
		ortanca=(ilk+son)/2;
	}
	if(ilk>son){
		printf("%d sayisi bulunamadi..",aranan);
	}
	return 0;
}
