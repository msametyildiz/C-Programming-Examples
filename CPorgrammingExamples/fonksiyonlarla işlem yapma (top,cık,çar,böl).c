
#include<stdio.h>
int fonk(int islem,int a,int b){
	switch(islem){
		case 0 :
			return a+b;
			break;
		case 1 :
			return a-b;
			break;
		case 2 :
			return a*b;
			break;
		case 3 :
			return a/b;
			break;
		default :
			break;
	}
}
int main (){
	int num1,num2,sonuc,islem;
	printf("yapmak istediginiz islemi giriniz :\n+   icin 0 i\n-   icin 1 i\n*   icin 2 yi\n/   icin 3 u\n\n");
	scanf("%d",&islem);
	printf("lutfen ilk sayiyi girin: \n");
	scanf("%d",&num1);
	printf("lutfen ikinci sayiyi girin: \n");
	scanf("%d",&num2);
	//sonuc=fonk(islem,num1,num2);
	printf("islemin sonucu : %d",fonk(islem,num1,num2));
	return 0;
	
}
