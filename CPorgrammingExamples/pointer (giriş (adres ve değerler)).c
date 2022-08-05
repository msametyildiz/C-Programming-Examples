#include<stdio.h>
int main(){
	int sayi=20;
	int *n;
	n=&sayi; //  n=sayi(20) nin adresi
	printf("%d\n",*n); // sayinin adresindeki deðeri yazdýrýyoruz
	printf("%d\n",n);  // sayi adresini yazdýrýyoruz
	printf("%d\n",sayi);	// sayiyi yazdýrýyoruz
	printf("%d\n",&sayi);	// sayinin adresinin yazdýrýyoruz
	return 0;
}
