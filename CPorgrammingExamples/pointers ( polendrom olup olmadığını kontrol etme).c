#include<stdio.h>
#include<stdlib.h>
int main(){
	char text[100];
	char *con1,*con2;
	int cntr=
	printf("enter text : ");
	gets(text);
	for(con1=text;*con1;con1++);
	con1--;
	for(con2=text; cntr && con2<con1;con2++,con1--){
		if(*con2!=*con1){
			cntr=0;
		}
	}
	if(cntr){
		printf("%s is polindron number ",text);
	}		
	else {
			printf("%s is not polindron number ",text);
	}
	return 0;
}
