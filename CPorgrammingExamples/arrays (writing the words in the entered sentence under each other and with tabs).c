
 /* girilen cümledekileri kelimeleri ben kod yazıyorum .
							   		 ben
									 	kod
									 		yazıyorum 
											 						şeklinde yazdırma*/


#include<stdio.h> 
#include<stdlib.h>

int main(){
	char cumle[100];
	int i,sayac=0,j;
	printf("lutfen bir cumle girin : \n");
	gets(cumle);
	for(i=0;cumle[i];i++){
		printf("%c",cumle[i]);
		if(cumle[i]==32){
			sayac++;
			printf("\n");
			for(j=0;j<sayac;j++){
				printf("\t");
			}
		}
	}
	return 0;
}
