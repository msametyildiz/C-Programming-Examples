#include<stdio.h>
#include<stdlib.h>
int main(){
	int sayi=5,i;
	int *ptr=(int*)calloc(5,sizeof(float));
	if(ptr==NULL){
		printf("datadan yer ayarlanamadý ");
	}
	else{
		for(i=0;i<5;i++){
			ptr[i]=i+1;
		}
		for(i=0;i<5;i++){
			printf("%4d",ptr[i]);
		}
		free(ptr);
	}
	return 0;
}
