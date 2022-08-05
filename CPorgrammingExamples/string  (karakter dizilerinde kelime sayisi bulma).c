//										strings (karakter dizilerinde kelime sayisi bulma)

#include<stdio.h>
int main(){
	char text[100];
	int b=1,i=0;
	printf("lutfen bir text girin: ");
	gets(text);
	while(text[i]){
		if(text[i]==32){
			b++;
		}
		i++; 
	}
	printf("%d",b);
	return 0;
}
