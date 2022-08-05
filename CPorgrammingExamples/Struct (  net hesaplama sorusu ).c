#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ilk{
	int no;
	char cozum[10];
	float sonuc;
};
struct ikinci{
	char cevap[10];
	
};
void hesapla(struct ilk ogrenci[],struct ikinci ogretmen){
	int i,j;
	float dogru=0,yanlis=0;
	for(i=0;i<1;i++){
		for(j=0;j<10;j++){
			if(ogrenci[i].cozum[j]==ogretmen.cevap[j]){
				dogru++;
			}
			else{
				yanlis++;
			}
		}
		yanlis/=4;
		dogru-=yanlis;
		printf("%d nolu ogrencinin neti %.2f dir\n",ogrenci[i].no,dogru);
	}
}
int main(){
	struct ilk ogrenci[1];
	struct ikinci ogretmen;
	int j,i;
	for(i=0;i<1;i++){
		printf("%d. ogrencinin okul numarasini girin : ",i+1);
		scanf("%d",&ogrenci[i].no);
		for(j=0;j<10;j++){
			printf("%d. ogrencinin %d. cevabini girin : ",i+1,j+1);
			fflush(stdin);
			scanf("%c",&ogrenci[i].cozum[j]);
		}
	}
	for(i=0;i<10;i++){
		printf("lutfen %d. sorunun cevabini giriniz : ",i+1);
		fflush(stdin);
		scanf("%c",&ogretmen.cevap[i]);
	}
	hesapla(ogrenci,ogretmen);
	return 0;
}
