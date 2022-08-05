//												string ( küçük harfli metni büyük harfli yazma )
#include<stdio.h>
int main(){
	int i=0;
	char string[100];
	printf("enter text: ");
	gets(string);
	while(string[i]){
		if(string[i]>=97&&string[i]<=122){
			string[i]=string[i]-32;
		}
		i++;
	}
	printf("%s",string);
	return 0;
}
