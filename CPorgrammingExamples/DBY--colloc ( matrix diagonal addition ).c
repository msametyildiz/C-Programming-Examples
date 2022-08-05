#include<stdio.h>
#include<stdlib.h>
int main(){
	int r,c,i,j,sum=0;
	printf("How many elements in the column : ");
	scanf("%d",&c);
	printf("How many elements in the rows : ");
	scanf("%d",&r);
	int **arr=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++){
		*(arr+i)=(int*)malloc(c*sizeof(int));
		for(j=0;j<c;j++){
			printf("%d. rows %d. column : ",i+1,j+1);
			scanf("%d",&*(*(arr+i)+j));
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%4d",*(*(arr+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum+=*(*(arr+i)+j);
			}
		}
	}
	printf("\n");
	printf("The sum : %d",sum);

	return 0;
}
