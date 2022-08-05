#include<stdio.h>
#include<stdlib.h>
void fonk(int n){
	if(n==1){
		printf("%4d",n);
	}
	else{
		printf("%4d",n);
		fonk(n-2);
	}
}
int main(){
	int n;
	printf("sayi gir : ");
	scanf("%d",&n);
	fonk(n);
}
