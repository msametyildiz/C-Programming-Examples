
second solution
--------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
typedef enum{
	sayi,
	kirmizi,
	mavi,
	yesil,
	mor
}renkler;
int main(){
	renkler samet=mavi;
	printf("%d",samet);
	return 0;
}
second solution
--------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
enum renkler{
	sayi,
	kirmizi,
	mavi,
	yesil,
	mor
};
int main(){
	enum renkler samet=mavi;
	printf("%d",samet);
	return 0;
}
