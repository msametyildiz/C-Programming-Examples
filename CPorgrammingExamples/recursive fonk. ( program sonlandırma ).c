#include <stdio.h>
#include<stdlib.h>
void fonk(){
	int sayi;
	printf("enter number :\n");
	scanf("%d",&sayi);
	if(sayi==0){
		exit(0);//    döngüyü bitirir
	  //return 0; yazýp void i int e çevirsekte olur
	}
	else{
		fonk();
	}
}
int main(){
fonk();
return 0;
}
