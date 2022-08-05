//                              - girilene kadar sayý alma
#include<stdio.h>
int fonk(int sayi){
	if(sayi<0){
		return 0;
	}
	else{
		return 1;
	}
}
int main (){
	int num;
	printf("lutfen bir sayi giriniz: \n");
	scanf("%d",&num);
	while(fonk(num)==1){
		printf("lutfen bir sayi giriniz: \n");
		scanf("%d",&num);
	}
	return 0;
}
