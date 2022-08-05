#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct yarismaci{
	char ad[20];
	char soyad[20];
	float puan[10],performans;
};
float hesapla(struct yarismaci arr){
	float max,min,sum=0;
	max=min=arr.puan[0];
	for(int i=0;i<5;i++){
		if(arr.puan[i]>max){
			max=arr.puan[i];
		}
		else if(arr.puan[i]<min){
			min=arr.puan[i];
		}
		sum+=arr.puan[i];
	}
	return(float) (sum-max-min)/5;
}

int main(){
	int n,i,j;
	struct yarismaci arr[100];
	printf("lutfen yarismaci sayisini giriniz: ");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		printf("yarismacinin ismi : \n");
		scanf("%s",&arr[j].ad);
	
		printf("yarismacinin soyismi : \n");
		scanf("%s",&arr[j].soyad);		
		for(i=0;i<5;i++){
			printf("%d.hakemin puani : \n",i+1);
			scanf("%f",&arr[j].puan[i]);
		}
		arr[j].performans=hesapla(arr[j]);
	}
	for(i=0;i<n;i++){
		printf("%s %s. yarismacinin ortalamasi = %.2f\n",arr[i].ad,arr[i].soyad,arr[i].performans);
	}
	
	return 0;
}
