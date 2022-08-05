#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[5],*sum,i,result=0;
	for(i=0;i<5;i++){
		printf("%d.sayiyi girin ",i+1);
		scanf("%d",arr+i);
	}
	for(sum=arr;*sum;sum++){
		result+=*sum;
	}
	printf("%d",result);
	return 0;
}
