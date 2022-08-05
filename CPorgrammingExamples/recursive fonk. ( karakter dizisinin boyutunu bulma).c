#include <stdio.h>
#include<stdlib.h>
int fonk(int i,char cumle[]){
	if(cumle[i]=='\0'){
		return 0;
	}
	else{
		return 1+fonk(i+1,cumle);
	}
}
int main(){
	char cumle[100];
	printf("enter number:");
	gets(cumle);
	printf("%d",fonk(0,cumle));
return 0;
}
