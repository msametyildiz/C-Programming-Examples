#include<stdio.h>    
#include<stdlib.h> 
#include<string.h> 
int topla(int no){
	int sum=0,son;
	while(no>0){
		son=no%10;
		sum+=son;
		no/=10;
	}
	return sum;
}
int main(){ 
	int no,i,u,uzunluk,a=0;
	char text[100];
	printf("enter text : ");
	gets(text); 
	printf("enter no : ");
	scanf("%d",&no);
	uzunluk=strlen(text);
	char *chr=(char*)malloc(topla(no)*sizeof(char));
	u=topla(no);
	chr=text;
	for(i=0;i<u;i++){
		if(u-i>uzunluk){
			if(i>uzunluk){
				printf("%c",*(chr+a));
				a++;
			}
			else{
				printf("%c",*(chr+i-1));
			}
		}
		if(a==uzunluk){
			a=0;
		}
	}
return 0;  
}  
