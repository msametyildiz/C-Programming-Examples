#include<stdio.h>
#include<stdlib.h>
int fac(int *n){
	int fac=1,i;
	for(i=1;i<=*n;i++){
		fac*=i;
	}
	return fac;
}
int main(){	
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	printf("%d's factorial = %d ",n,fac(&n));
	return 0;
}
