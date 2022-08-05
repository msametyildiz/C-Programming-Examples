#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n,max,min,i;
	srand(time(NULL));
	printf("how many elements should be produced : ");
	scanf("%d",&n);
	int *data=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		*(data+i)=rand()%100+1;
		printf("%4d",*(data+i));
	}
	max=min=*data;
	for(i=0;i<n;i++){
		if(*(data+i)>max){
			max=*(data+i);
		}
		else if(*(data+i)<min){
			min=*(data+i);
		}
	}
	printf("\nmax = %d\nmin = %d",max,min);
	return 0;
}
