#include <stdio.h>
#include<stdlib.h>
void fonk(){
	int sayi;
	printf("enter number :\n");
	scanf("%d",&sayi);
	if(sayi==0){
		exit(0);//    d�ng�y� bitirir
	  //return 0; yaz�p void i int e �evirsekte olur
	}
	else{
		fonk();
	}
}
int main(){
fonk();
return 0;
}
