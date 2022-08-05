#include<stdio.h>
int main(){
	FILE *dosya;
	char arr[50];
	int n;
	printf("lutfen bir metin giriniz : ");
	gets(arr);
	printf("text de kac defa yazilsin:");
	scanf("%d",&n);
	dosya=fopen("deneme.txt","w");
	for(int i=0;i<n;i++){
		fputs(arr,dosya);
		fprintf(dosya,"\n");
	}
	fclose(dosya);
	return 0;
}
----------------------------------------------
														yazdýrma kýsýmlarý farklý
#include<stdio.h>
int main(){
	FILE *dosya;
	char arr[50];
	int n;
	printf("lutfen bir metin giriniz : ");
	gets(arr);
	printf("text de kac defa yazilsin:");
	scanf("%d",&n);
	dosya=fopen("deneme.txt","w");
	for(int i=0;i<n;i++){
		fprintf(dosya,"%s\n",arr);
	}
	fclose(dosya);
	return 0;
}

