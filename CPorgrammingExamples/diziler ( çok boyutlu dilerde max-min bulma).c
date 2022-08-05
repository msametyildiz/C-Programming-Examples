//																diziler ( çok boyutlu dilerde max-min bulma)

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int dizi[10][10],i,j,max,min;
	srand(time(NULL));
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			dizi[i][j]=rand()%100+1;
			printf("%4d",dizi[i][j]);
		}
		printf("\n");
	}
	max=0;
	min=dizi[0][0];
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){	
			if(dizi[i][j]>max){
				max=dizi[i][j];
			}
			else if(dizi[i][j]<min){
				min=dizi[i][j];
			}
		}
	}
	printf("\nmax: %d\nmin: %d",max,min);
	return 0;
}
