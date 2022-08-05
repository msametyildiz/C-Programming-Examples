//													FÝBONACCÝ DÝZÝSÝYLE ÜÇGEN

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fonk(int n){
	int j=0,i,dizi[100],yeni[100][100],a=0;
	for(i=1;i<=1000*n;i++){
		if(i<=1){
			dizi[j]=i;
		}
		else{
			dizi[j]=dizi[j-1]+dizi[j-2];
		}
		j++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			yeni[i][j]=dizi[a];
			printf("%d\t",yeni[i][j]);
			a++;
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
