#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,c,i,j;
	printf("how many element of rows in the array : ");
	scanf("%d",&n);
	printf("how many element of column in the array : ");
	scanf("%d",&c);
	int **arr=(int**)malloc(c*sizeof(int*));
	for(i=0;i<c;i++){
		*(arr+i)=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++){
			printf("%d. satirin %d. sutunu : ",i+1,j+1);
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	for(i=0;i<c;i++){
		for(j=0;j<n;j++){
			printf("%4d",*(*(arr+i)+j));
		}
		printf("\n");
	}
	
	return 0;
}
