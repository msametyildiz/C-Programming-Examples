// 													FLOYD ÜÇGENÝ
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fonk(int n){
	int i,j,a=1;
	for(i=1;i<=n;i++){
		j=1;
		while(j<=i){
			printf("%d\t",a);
			a++;
			j++;
		}
		printf("\n");
	}
}
int main(){
	int sayi;
	printf("bir sayi giriniz :\n");
	scanf("%d", &sayi);
	fonk(sayi);
	return 0;
}

