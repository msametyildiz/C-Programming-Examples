//												 random sayýlarla oluþturulan dizinin bir karakterini silme 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fonk(int yenidizi[],int sayi,int sirano){
	int i;
	for(i=0;i<sayi-1;i++){
		if(i>=sirano-1){
			printf("%d\t",yenidizi[i+1]);
		}
		else{
		printf("%d\t",yenidizi[i]);
	    }
	}
}
int main(){
	int a,i,dizi[1000],n;
	printf("kac adet random sayý olsun : ");
	scanf("%d",&a);
	srand(time(NULL));
	for(i=0;i<a;i++){
		dizi[i]=rand()%1000+1;
		printf("%d\t", dizi[i]);
	}
	printf("\n\n");
	printf("dizinin kacinci elemani silinecek: \n");
	scanf("%d",&n);
	fonk(dizi,a,n);
	return 0;
}
