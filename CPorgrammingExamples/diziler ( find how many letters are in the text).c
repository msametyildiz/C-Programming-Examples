//												diziler ( bir metinde hangi harften kaç adet var)

#include<stdio.h>
#include<stdlib.h>
int main(void){
	char c;
	int sayma[26]={0},gecici,karakter=0,i;
	printf("lutfen bir tekst yaziniz : \n");
	while((c=getchar())!='\n'){
		gecici=c-'a';
		if(gecici>=0 &&gecici<=26){
			sayma[gecici]++;
		}
		karakter++;
	}
	printf("\ngirdigigniz tekste %d kadar karakter var ",karakter);
	for(i=0;i<26;i++){
		printf("\n%c karakterden %d kadar var",'a'+i,sayma[i]);
	}
	return 0;
}	
										POÝNTER KULLANILARAK YAPILDI  !!! 
#include<stdio.h>
#include<stdlib.h>
int main(){
	char c;
	int i,gecici;
	int *arr=(int*)malloc(26*sizeof(int));
	for(i=0;i<26;i++){
		*(arr+i)=0;
	}
	printf("enter text : ");
	while((c=getchar())!='\n'){
		gecici=c-'a';
		if(gecici>=0 && gecici<=26){
			arr[gecici]++;
		}
	}
	for(i=0;i<26;i++){
		if(*(arr+i)!=0){
			printf("\n%c den %d kadar vardir . ",'a'+i,*(arr+i));
		}
	}
	return 0;
}
