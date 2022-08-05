#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,t=0,c=0,n,a=0,b=0;
	printf("how many element in the arr : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("%d. element : ",i+1);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			t++;
		}
		else{
			c++;
		}
	}
	int *even=(int*)malloc(c*sizeof(int*));
	int *odd=(int*)malloc(t*sizeof(int*));
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			*(even+a)=arr[i];
			a++;
		}
		else{
			*(odd+b)=arr[i];
			b++;
		}
	}
	for(i=0;i<c;i++){
		printf("%4d-->(%d)",*(even+i),(even+i));
	}
	printf("\n");
	for(i=0;i<t;i++){
		printf("%4d-->(%d)",*(odd+i),(odd+i));
	}
	return 0;
}
