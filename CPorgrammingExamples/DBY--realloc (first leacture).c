#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=5;
	int *ptr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		*(ptr+i)=n+i;
	}
	if(ptr==NULL){
		printf("olmadý...");
		exit(0);
	}
	else{
		for(int i=0;i<n;i++){
			printf("%4d",*(ptr+i));
		}
		printf("\n");
		n=10;
		ptr=(int*)realloc(ptr,n*sizeof(int));
	
		for(int i=0;i<n;i++){
			*(ptr+i)=5+i;
		}
		for(int i=0;i<n;i++){
			printf("%4d",*(ptr+i));
		}
	}
	return 0;
}
