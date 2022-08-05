//										dairenin alaný ve çevresinin bulma

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
void dairealani(int r){
	float a;
	a=2*PI*r*r;
	printf("dairenin alani --> %.2f\n",a);
}
void dairecevresi(int r){
	float b;
	b=2*PI*r;
	printf("dairenin cevresi --> %.2f\n",b);
}
int main(){
	int n;
	printf("dairenin yari capinin girin : \n\n");
	scanf("%d",&n);
	dairealani(n);
	dairecevresi(n);
	return 0;
}
