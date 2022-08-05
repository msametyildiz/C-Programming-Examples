#include<stdio.h>
#include<stdlib.h>
int asalmi(int n,int a){
	if(a==1){
		return 1;
	}
	else if(n%a==0){
		return 0;
	}
	else{
		asalmi(n,a-1);
	}
}
int main(){
	int n,i,kontrol;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		kontrol=asalmi(i,i/2);
		if(kontrol==1){
			printf("%4d",i);
		}
	}
	return 0;
}

