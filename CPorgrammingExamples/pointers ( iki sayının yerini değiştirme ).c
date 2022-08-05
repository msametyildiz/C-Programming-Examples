#include<stdio.h>
#include<stdlib.h>
void degistir(int *first,int *second){
	int p;
	p=*first;
	*first=*second;
	*second=p;
}
int main(){
	int a=10,b=20;
	printf("once a:  %d\nonce b: %d\n",a,b);
	degistir(&a,&b);
	printf("sonra a: %d\nsonra b: %d",a,b);
	return 0;
}
