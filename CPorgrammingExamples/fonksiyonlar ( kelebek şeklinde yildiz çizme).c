//														fonksiyonlar (* iþaretiyle kelebek çizme)
#include<stdio.h>
#include<stdlib.h>
void ustfonk(int sayi){
	int i,j;
	for(i=sayi;i>0;i--){
		for(j=1;j<=sayi-i;j++){
			printf(" ");
		}		
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
void altfonk(int sayi){
	int i,j;
	for(i=1;i<=sayi;i++){
		for(j=1;j<=sayi-i;j++){
			printf(" ");
		}		
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	int n;
	printf("lutfen bir sayi gir: ");
	scanf("%d",&n);
	ustfonk(n);
	altfonk(n);
	return 0;
}
