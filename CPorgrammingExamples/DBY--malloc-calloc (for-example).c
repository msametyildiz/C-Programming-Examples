#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,*ptr2,n=5;
	ptr=(int*)malloc(n*sizeof(int));
	ptr2=(int*)calloc(n,sizeof(int));
	if(ptr==NULL || ptr2==NULL){
		printf("basarisiz .");
		exit(0);
	}
	else{
		printf("malloc basarili ..\n");
		free(ptr);
		printf("malloc serbest kaldi --\n");
		printf("calloc basarili ..\n");
		free(ptr2);
		printf("calloc serbest kaldi --\n");

	}
	return 0;
}
