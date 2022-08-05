#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int fonk(int x,int i,int n){
	int a;
	if(n==0){
		return 0;
	}	
	else{
		a=pow(x,i);
		printf("%4d",a);
		fonk(x,i+1,n-1);
	}
}
int main(){
	int n,x;
	printf("enter step number :");
	scanf("%d",&n);
	printf("Take the power of which number:");
	scanf("%d",&x);
	
	fonk(x,0,n);
return 0;
}
