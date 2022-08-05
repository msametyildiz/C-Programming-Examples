
//  girilen cümledeki harfleri alt alta yazdýrma


#include<stdio.h> 
#include<stdlib.h>

int main(){
	char cumle[100];
	int i;
	printf("lutfen bir cumle girin : \n");
	gets(cumle);
	for(i=0;cumle[i];i++){
		printf("%c\n",cumle[i]);
	}
	return 0;
}
