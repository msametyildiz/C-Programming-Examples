//  															çok boyutlu diziler ( iki matriks toplami)
#include<stdio.h>
int main(){
	int dizi[5][5],dizi2[5][5],sonuc[5][5],j,i;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("1.m lutfen %d. satirin %d.sutununu girin.:",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("2.m lutfen %d. satirin %d.sutununu girin.:",i+1,j+1);
			scanf("%d",&dizi2[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sonuc[i][j]=dizi[i][j]+dizi2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t", sonuc[i][j]);
		}
		printf("\n");
	}
	return 0;
}
