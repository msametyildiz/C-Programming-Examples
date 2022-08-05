// 														string ( girilen bir metinde kelimeleri alt alta yazdýrma)
#include<stdio.h>
int main(){
	int i=0;
	char text[100];
	printf("enter text:  ");
	gets(text);
	while(text[i]){
		if(text[i]!=' '){
			printf("%c",text[i]);
		}
		else if(text[i]==' '){
			printf("\n");
		}
		i++;
	}
	return 0;
}

