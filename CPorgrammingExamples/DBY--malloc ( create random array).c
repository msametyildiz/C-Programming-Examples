#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,n;
	srand(time(NULL));
	printf("how many elements in the array :");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
		*(arr+i)=rand()%100+1;
	}
	for(i=0;i<n;i++){
		printf("%4d",*(arr+i));
	}
	return 0;
}

