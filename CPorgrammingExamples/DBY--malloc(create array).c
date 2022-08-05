#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	printf("how many elements in the array : ");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		*(arr+i)=10*i;
	}
	for(i=0;i<n;i++){
		printf("%4d",*(arr+i));
	}
	return 0;
}

