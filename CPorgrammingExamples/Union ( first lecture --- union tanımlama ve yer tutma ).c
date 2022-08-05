#include<stdio.h>
#include<stdlib.h>
union test{
	int a;
	float b;
	char arr;
	double c;
};
int main(){
	union test t;
	t.a=5;
	printf("a= %d\n",t.a);	
	t.b=3;
	printf("b= %.2f\n",t.b);
	t.arr='a';
	t.c=7;
	printf("unionun tutuldugu yer %d byte ",sizeof(t));
	return 0;
}
