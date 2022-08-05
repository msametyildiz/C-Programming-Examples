//											bölüm kalan bulma
#include<stdio.h>
#include<stdlib.h>
void fonk(int a, int b){
	int degisken,step,remain;
	remain=a%b;
	step=a/b;
	printf("bolum deger -->  %d\n",step);
	printf("kalan deger -->  %d",remain);
}
int main(){
	int x,y;
	printf("lutfen bolunan sayiyi giriniz : ");
	scanf("%d",&x);
	printf("lutfen bolan sayiyi giriniz : ");
	scanf("%d",&y);
	fonk(x,y);
	return 0;
}
