// 														string ( girilen bir metinde kaç adet kelime var)
#include<stdio.h>
int main(){
	int i=0,counter=1;
	char text[100];
	printf("enter text:  ");
	gets(text);
	while(text[i]){
		if(text[i]==' '){
			counter++;
		}
		i++;
	}
	printf("There are %d words in the text",counter);
	return 0;
}

