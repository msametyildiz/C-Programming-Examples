//                     bir sayinin factoriyelini alma
#include<stdio.h>
int fonk(int sayi){
	int fac=1,i;
	for(i=1;i<=sayi;i++){
		fac*=i;
	}
	return fac;
}
int main (){
	int n;
	printf("lutfen sayi girin: \n");
	scanf("%d",&n);
	printf("sonuc  -->  %d",fonk(n));
	return 0;
	
}
