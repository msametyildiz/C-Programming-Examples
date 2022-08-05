//													string (girilen kelimeyle üçgen çizme)
#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	int i=0,j;
	printf("lutfen bir text girin: ");
	gets(text);
	while(text[i]){
		for(j=0;j<i+1;j++){
			printf("%c",text[j]);
		}	
		printf("\n");
		i++;
	}
	return 0;
}
