#include <stdio.h>
#include<stdlib.h>
int fonk(int a){
	int i;
	if(a==0){
		return 0;
	}
	else{
		for(i=0;i<a;i++){
			printf("* ");
		}
		printf("\n");
		fonk(a-1);
	}
}
int main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	fonk(n);
return 0;
}
