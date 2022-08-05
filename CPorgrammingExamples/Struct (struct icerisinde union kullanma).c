#include<stdio.h>
#include<string.h>
struct deger{
	int tip;
	union {
		char karakter;
		float sayi;
	}birlesim;
};
int main() {
	struct deger degerler[20];
	int i=-1,n=0,j;
	float ort=0.0;
	do{
		i++;
		printf("lutfen bir tam sayi girin: ");
		fflush(stdin);
		scanf("%d",&degerler[i].tip);
		if(degerler[i].tip==1){
			printf("lutfen bir karakter girin : ");
			fflush(stdin);
			scanf("%c",&degerler[i].birlesim.karakter);
		}
		else if(degerler[i].tip==0){
			printf("lutfen bir real sayi girin : ");
			fflush(stdin);
			scanf("%f",&degerler[i].birlesim.sayi);
		}
	}while(degerler[i].tip==1||degerler[i].tip==0);
	for(j=0;j<i;j++){
		ort+=degerler[j].birlesim.sayi;
		n++;
	}
	ort/=n;
	printf("real sayilarin sonucu %.2f dir",ort);
	return 0;
}
