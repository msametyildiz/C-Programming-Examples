#include<stdio.h>
#include<stdlib.h>
typedef enum {
	ocak,
	subat,
	mart,
	nisan,
	mayis,
	haziran,
	temmuz,
	agustos,
	eylul,
	ekim,
	kasim,
	aralik
}aylar;
int main(){
	aylar arr=aralik;
	printf("%d",arr+1);
	return 0;
}
