#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum=0,n;
	printf("how many element in the array : ");
	scanf("%d",&n);
	int *arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("enter %d. element : ",i+1);
		scanf("%d",(arr+i));
		sum+=*(arr+i);
	}
	free(arr);
	printf("sum = %d",sum);
	return 0;
}
