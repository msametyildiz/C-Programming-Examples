// 												recursive fonk.(bolum,kalan bulma)
#include<stdio.h>
#include<stdlib.h>
int fonk(int bolunen,int bolen){
	if(bolen==0){
		return 0;
	}
	else if(bolunen-bolen==0){
		return 1;
	}
	else if(bolunen<bolen){
		return 0;
	}
	else{
		return (1+fonk(bolunen-bolen,bolen));
	}
}
int main(){
	int a,b;
	printf("enter first number : ");
	scanf("%d",& a);
	printf("enter second number : ");
	scanf("%d", & b);
	printf("bolum = %d\n",fonk(a,b));
	printf("kalan = %d", a-(fonk(a,b)*b));
	return 0;
}
