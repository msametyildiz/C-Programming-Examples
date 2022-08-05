// 														FÝBONACCÝ DÝZÝSÝ OLUÞTURMA 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fonk(int sayi){
	int i,j=0,dizi[100];
	for(i=0;i<sayi;i++){
		if(i<=1){
			dizi[j]=i;
		}
		else{
			dizi[j]=dizi[j-1]+dizi[j-2];
		}
		j++;
	}
	for(i=0;i<sayi;i++){
		printf("%d\t", dizi[i]);
	}
} 

int main(){
	int n;
	printf("lutfen bir sayi giriniz : ");
	scanf("%d",&n);
	fonk(n);
	return 0;
}
