//												dizinin elemanlarýný küçükten büyüðe siralama

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fonk(int a[],int sayi){
	int i,j,gecici;
	for(i=0;i<sayi-1;i++){
		for(j=0;j<sayi-1-i;j++){
			if(a[j]>a[j+1]){
				gecici=a[j];
				a[j]=a[j+1];
				a[j+1]=gecici;
			}
		}
	}
}
int main(){
	int n,dizi[100],i;
	srand(time(NULL));
	printf("kac adet random sayi uretilsin : \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		dizi[i]=rand()%100+1;
		printf("%d\t",dizi[i]);
	}
	printf("\n");
	fonk(dizi,n);
	printf("\n\nsiralanmis hali :\n");
	for(i=0;i<n;i++){
		printf("%d\t", dizi[i]);
	}
	return 0;
}
