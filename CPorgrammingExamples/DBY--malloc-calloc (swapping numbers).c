#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fonk(int *a,int *b){
	int gecici;
	gecici=*a;
	*a=*b;
	*b=gecici;
}
int main(){
	int *a=(int*)malloc(1*sizeof(int*));
	int *b=(int*)calloc(1,sizeof(int*));
	printf("enter first number : ");
	scanf("%d",&(*a));
	printf("enter second number : ");
	scanf("%d",&(*b));
	printf("%4d%4d",*a,*b);
	printf("\n");
	fonk(a,b);
	printf("%4d%4d",*a,*b);
	return 0;
}

