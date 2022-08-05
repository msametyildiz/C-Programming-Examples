//													fonksiyonlar ( stringler de iki kelimenin ortak harf sayýlarýný bulma )


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ort_harf(char chr1[100],char chr2[100],int *ortak){
	int i,j,kelime1,kelime2;
	kelime1=strlen(chr1);
	kelime2=strlen(chr2);
	printf("%d ve %d ",kelime1,kelime2);
	*ortak=0;
	for(i=0;i<kelime1;i++){
		for(j=0;j<kelime2;j++){
			if(chr1[i]==chr2[j]){
				*ortak=*ortak+1;
			}
		}
	}
}
int main(){
	char dizi[100],kar2[100],kar1[100];
	int karakteruzunlugu,ort;
	printf("lutfen birseyler yazin: ");
	gets(dizi);
	karakteruzunlugu=strlen(dizi);
	printf("\nkarakter  uzunlugu : %d",karakteruzunlugu);
	printf("\n\nlutfen iki kelime giriniz :");
	scanf("%s %s",kar1,kar2);
	ort_harf(kar1,kar2,&ort);
	printf("\n%s ve %s arasinda %d kadar ortak harf bulunmustur.",kar1,kar2,ort);
	return 0;
}
