//birden ona kadar sayýlarýn fac alma
#include<stdio.h>
int fonk(int sayi){
	int fac=1,i;
	for(i=1;i<=sayi;i++){
		fac*=i;
	}
	return fac;
}
int main (){
	int i;
	for(i=1;i<=10;i++){
		printf("sonuc  -->  %d\n\n",fonk(i));
	}
	return 0;
	
}
