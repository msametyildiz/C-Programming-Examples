#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	int **arr=(int**)malloc(3*sizeof(int*));
	for(i=0;i<3;i++){
		arr[i]=(int*)malloc(4*sizeof(int));
		for(j=0;j<4;j++){
			arr[i][j]=10*i+j+1;
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

