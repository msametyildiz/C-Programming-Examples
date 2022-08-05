#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct araba {
	int satis;
	union {
		double fiyat;
		char marka[20];
	}bilgi;
};
int main(){
	struct araba araba_a;
	araba_a.satis=0;
	strcpy(araba_a.bilgi.marka,"Anadol");
	araba_a=1;
	araba_a.bilgi.fiyat=20000;
	
	return 0;
}
