#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int lengfunc(char chr[],int zero){
	static int step=0;
	if(chr[zero]!='\0'){
		return step=1+lengfunc(chr,zero+1);
	}
	else{
		return step;
	}
}
int func(char chrr[],int leng){
	if(leng==1){
		printf("%c",chrr[leng-1]);
	}
	else{
		printf("%c",chrr[leng-1]);
		func(chrr,leng-1);
	}
}
int main(){
    char chr[100];
    int leng;
    printf("enter text: ");
    gets(chr);
	leng=lengfunc(chr,0);
	printf("%d\n",leng);
    func(chr,leng);
    return 0;
}
