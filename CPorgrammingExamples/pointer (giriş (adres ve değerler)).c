#include<stdio.h>
int main(){
	int sayi=20;
	int *n;
	n=&sayi; //  n=sayi(20) nin adresi
	printf("%d\n",*n); // sayinin adresindeki değeri yazdırıyoruz
	printf("%d\n",n);  // sayi adresini yazdırıyoruz
	printf("%d\n",sayi);	// sayiyi yazdırıyoruz
	printf("%d\n",&sayi);	// sayinin adresinin yazdırıyoruz
	return 0;
}
