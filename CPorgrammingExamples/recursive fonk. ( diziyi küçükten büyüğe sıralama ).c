#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int fonk(int dizi[],int n){
	int gecici,i;
	if(n>0){
		for(i=0;i<n;i++){
			if(dizi[i]>dizi[i+1]){
				gecici=dizi[i+1];
				dizi[i+1]=dizi[i];
				dizi[i]=gecici;
			}
		}
		fonk(dizi,n-1);
	}
}
int main(){
	srand(time(NULL));
	int n,i;
	printf("enter number :");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++){
		dizi[i]=rand()%100+1;
		printf("%4d",dizi[i]);
	}
	fonk(dizi,n);
	printf("\n\n");
	for(i=0;i<n;i++){
		printf("%4d",dizi[i]);
	}
return 0;
}
