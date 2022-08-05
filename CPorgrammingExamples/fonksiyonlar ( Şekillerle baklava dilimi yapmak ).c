	//										Þekillerle baklava dilimi yapmak	

#include<stdio.h>
#include<stdlib.h>
void cfonk(int n){
	int bosluksayisi=n-1,i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=bosluksayisi;j++){
			printf(" ");
		}
		bosluksayisi--;
		for(j=1;j<=2*i-1;j++){
			printf("C");
		}
		printf("\n");
	}
}

void artifonk(int x){
	int i,j,bosluksayisi=1;
	for(i=1;i<=x-1;i++){
		for(j=1;j<=bosluksayisi;j++){
			printf(" ");
		}
		bosluksayisi++;
		for(j=1;j<=2*(x-i)-1;j++){
			printf("+");
		}
		printf("\n");
	}
}

int main(){
	int sayi;
	printf("lutfen bir sayi giriniz : \n");
	scanf("%d",&sayi);
	cfonk(sayi);
	artifonk(sayi);
	return 0;
}
