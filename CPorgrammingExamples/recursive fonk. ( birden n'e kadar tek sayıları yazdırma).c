#include<stdio.h>
int fonk(int zero,int a){
	if(zero>=a){
		return zero;
	}
	else {
		if(zero%2!=0){
			printf("%4d",zero);
		}
		return fonk(zero+1,a);
	}
}
int main(){
	int n;
	printf("enter number :");
	scanf("%d",&n);
	fonk(0,n);
	return 0;
}
