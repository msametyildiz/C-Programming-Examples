#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char ad[100];
	float x_ekseni;
	float y_ekseni;
}ay;
void yazdir(nokta arr[],int sayi){
	for(int i=0;i<sayi;i++){
		printf("%s = (%.2f - %.2f)\n",arr[i].ad,arr[i].x_ekseni,arr[i].y_ekseni);
	}
}
int main(){
	nokta arr[3]={{"muhammed",5,3},{"samet",5,3},{"yildiz",5,3}};
	yazdir(arr,3);
	return 0;
}
