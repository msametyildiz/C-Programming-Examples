#include <stdio.h>
int asalmi(int sayi,int yari){
	if(yari==1){
		return 1;
	}
	else if(sayi%yari==0){
		return 0;
	}
	else{
		asalmi(sayi,yari-1);
	}
}
int main(){
	int i,kontrol,n; 
	printf("enter number : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		kontrol=asalmi(i,i/2);
		if(kontrol==1){
			printf("%4d",i);
		}
	}
  return 0;
}
