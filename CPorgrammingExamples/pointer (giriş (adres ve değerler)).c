#include<stdio.h>
int main(){
	int sayi=20;
	int *n;
	n=&sayi; //  n=sayi(20) nin adresi
	printf("%d\n",*n); // sayinin adresindeki de�eri yazd�r�yoruz
	printf("%d\n",n);  // sayi adresini yazd�r�yoruz
	printf("%d\n",sayi);	// sayiyi yazd�r�yoruz
	printf("%d\n",&sayi);	// sayinin adresinin yazd�r�yoruz
	return 0;
}
