//  																string (bir stringde bir karakter varsa ilk indizi yadırma)

#include<stdio.h>
int karakterbul(char dizi[],char c){
	int i=0;
	while(dizi[i]){
		if(dizi[i]==c){
			return i;
		}
		i++;
	}
	return -1;
}
int main(){
	char a[100],chr;
	printf("enter text : ");
	gets(a);
	printf("enter character: ");
	scanf("%c",&c);
	printf("%d",karakterbul(a,c));
	return 0;
}
