#include<stdio.h>
#include<stdlib.h>
int main(){
	char *dizi[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	int n;
	do{
		printf("lutfen bir gun giriniz : ");
		scanf("%d",&n);
	}while(n<1 || n>7);
	printf("haftanin %d. gunu %s dir.",n,dizi[n-1]);
	return 0;
}
