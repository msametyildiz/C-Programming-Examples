#include<stdio.h>
#include<stdlib.h>
int fonk(int no){
	if(no<10&&no>=0){
		return 1;
	}
	else{
		return 10*fonk(no/10);
	}
}
int main(){
	int no;
	printf("enter student number :");
	scanf("%d",&no);
	printf("the answer --> %dds digit",fonk(no));
	return 0;
}
