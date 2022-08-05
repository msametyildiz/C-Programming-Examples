//														string (string içindeki kelimelerin baþ harflerini büyük yazdýrma)

#include<stdio.h>
int main(){
	char a[100];
	int i=0;
	printf("enter text : ");
	gets(a);
	while(a[i]){
		if(a[i]==' '){
			a[i+1]-=32;
		}
		else if(i==0){
			a[i]-=32;
		}
		i++;
	}
	puts(a);
	return 0;
}
