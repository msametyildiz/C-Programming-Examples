//															rastgele sayý üreterek max min bulma
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fonk(int a){
	int i,n,dizi[100],max,min;
	srand(time(NULL));
	for(i=0;i<a;i++){
		n=rand()%1000+1;
		dizi[i]=n;
		printf("%d\t", n);
	}
	printf("\n\n");
	max=0;
	min=dizi[0];
	for(i=0;i<a;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
		else if(dizi[i]<min){
			min=dizi[i];
		}
	}
	printf("max --> %d\nmin --> %d", max,min);
}
int main(){
	int n;
	printf("kac adet random sayý uretilsin : \n");
	scanf("%d",&n);
	fonk(n);
	return 0;	
}

