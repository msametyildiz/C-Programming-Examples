#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int fonk(char dizi[],int len){
	if(len<0){
		return 0;
	}
	else{
		printf("%c",dizi[len]);
		fonk(dizi,len-1);
	}
}
int main(){
	int len;
	char dizi[100];
	printf("enter text:");
	gets(dizi);
	len=strlen(dizi);
	fonk(dizi,len);
return 0;
}
