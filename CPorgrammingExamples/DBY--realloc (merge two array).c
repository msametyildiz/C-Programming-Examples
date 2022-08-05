#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	srand(time(NULL));
	int *arr=(int*)malloc(10*sizeof(int));	
	int *chr=(int*)malloc(10*sizeof(int));
	printf("first array : \n");
	for(i=0;i<10;i++){
		*(arr+i)=rand()%100+1;
		printf("%4d",*(arr+i));
	}
	printf("\nsecond array : \n");
	for(i=0;i<10;i++){
		*(chr+i)=rand()%100+1;
		printf("%4d",*(chr+i));
	}
		
	for(i=0;i<10;i++){
		*(arr+10+i)=*(chr+i);
	}
	printf("\nlast array : \n");
	for(i=0;i<20;i++){
		printf("%4d",*(arr+i));	
	}
	free(arr);
	free(chr);
	return 0;
}
