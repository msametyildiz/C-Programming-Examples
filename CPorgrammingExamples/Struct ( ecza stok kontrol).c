#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct ecza{
	char ilacadi[10];
	int adet;
	int fiyat;
};
int main(){
	int n,i;
	srand(time(NULL));
	struct ecza data[100];
	printf("kac adet ilac olsun : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("ilac adi : ");
		fflush(stdin);
		gets(data[i].ilacadi);
		data[i].adet=rand()%100+1;
		data[i].fiyat=rand()%50+10;
	}
	printf("stok kontrol : \n");
	for(i=0;i<n;i++){
		puts(data[i].ilacadi);
		printf("--> %d adet vardir ilac fiyati: %d TL dir\n",data[i].adet,data[i].fiyat);
	}
	return 0;
}
