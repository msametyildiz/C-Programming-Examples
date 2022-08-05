#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,sayi=5,i;
	ptr=(int*)malloc(5*sizeof(int));
	if(ptr==NULL){
		printf("datadan yer ayarlanamadý ");
	}
	else{
		for(i=0;i<5;i++){
			ptr[i]=i+1;
		}
		for(i=0;i<5;i++){
			printf("%4d",*(ptr+i));
		}
		free(ptr);
	}
	return 0;
}
